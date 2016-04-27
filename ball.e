note
	description: "Les balles que le personnage doit tirer"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	BALL

inherit
	DRAWABLE
	HEARABLE
		redefine
			play_sound
		end

create
	make

feature {NONE} -- Initialization

	make(a_x:INTEGER; a_y:INTEGER; a_size:INTEGER; a_going_right:BOOLEAN)
		local
			l_image:IMG_IMAGE_FILE
			l_path:STRING
		do
			l_path:=""
			size:=a_size
			if size = 1 then
				l_path := "yball1.png"
					top_speed:= 15
			elseif size = 2 then
				l_path := "yball2.png"
					top_speed:= 19
			elseif size = 3 then
				l_path := "yball3.png"
				top_speed:=24
			end
			create l_image.make (l_path)
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					x:=a_x
					y:=a_y
					speed := 1
					go_right:= a_going_right
					go_up:=False
					move_timer:=1
					is_dead:=false
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end

			create sound.make("pop.wav")
			if sound.is_openable then
				sound.open
				if sound.is_open then
					audio_library.sources_add
					source:=audio_library.last_source_added	-- The first source will be use for playing the music
				else
					print("Cannot open sound files.")
					die(1)
				end
			else
				print("Sound files not valid.")
				die(1)
			end
		end

feature
	move(a_background:BACKGROUND)
		do
			move_timer := move_timer + 1
			if move_timer = 3 then

				if go_up then
					y := y + speed
					if speed = 0 then
						go_up:=false
					end
				else
					y := y + speed
					if y + height >= 462 then --462 est le plancher
						y:= 462 - height
						speed := -top_speed --Change le speed à -9 avant de faire le y = y - 10
						go_up:=true
					end

				end

				speed := speed + 1

				move_timer := 1
			end

			if go_right then
				x := x + 1
				if x > (a_background.width - current.width) then
					go_right:= False
				end
			else
				x:= x - 1
				if x < 0 then
					go_right:=True
				end
			end

	end

	size:INTEGER
	speed:INTEGER assign set_speed
	top_speed:INTEGER
	go_right:BOOLEAN
	go_up:BOOLEAN
	move_timer:INTEGER

	is_dead:BOOLEAN assign set_is_dead

	set_is_dead(a_is_dead:BOOLEAN)
		do
			is_dead:= a_is_dead
		end

	set_speed(a_speed:INTEGER)
		do
			speed:=a_speed
		end

	play_sound
		do
			source.stop					-- Be sure that the queue buffer is empty on the sound_source object (when stop, the source queue is clear)
			sound.restart						-- Be sure that the sound is at the beginning
			source.queue_sound (sound)
			source.play					-- Play the source
		end

end
