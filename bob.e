note
	description: "Personnage du jeu"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	BOB

inherit
	DRAWABLE
	HEARABLE
		redefine
			play_sound
		end

create
	make

feature
	make
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make("animation.png")
			l_image.open
			make_from_image (l_image)

			create surface_left.make_from_image (l_image)

			create {GAME_SURFACE_ROTATE_ZOOM} surface_right.make_zoom_x_y (surface_left, -1, 1, True)

			temps := 1

			create animation.make(6)
			animation.extend (surface_right.width // 3)	-- Be sure to place the image standing still first
			animation.extend (0)
			animation.extend (0)
			animation.extend (0)
			animation.extend ((surface_right.width // 3) * 2)
			animation.extend (0)

			surface := surface_right
			sub_x := animation.at (1)
			sub_y := animation.at (2)

			is_dead := false

			create sound.make("sound.aif")
			if sound.is_openable then
				sound.open
				if sound.is_open then
					audio_library.sources_add
					source:=audio_library.last_source_added	-- The first source will be use for playing the music
					source.queue_sound(sound)
				else
					print("Cannot open sound files.")
					die(1)
				end
			else
				print("Sound files not valid.")
				die(1)
			end
		end

	go_right
		do
			going_right:= true
		end

	go_left
		do
			going_left:= true
		end

	stop_right
		do
			going_right:= false
		end

	stop_left
		do
			going_left := false
		end

	going_right:BOOLEAN

	going_left:BOOLEAN

	surface_right:GAME_SURFACE

	surface_left:GAME_SURFACE

	animation:ARRAYED_LIST[INTEGER]

	surface:GAME_SURFACE

	is_dead:BOOLEAN assign set_is_dead

	set_is_dead(a_is_dead:BOOLEAN)
		do
			is_dead := a_is_dead
		end

	temps:INTEGER


	animate(a_background:BACKGROUND)
		do
			if going_right = false and going_left = false then
				sub_x := animation.at (1)
				sub_y := animation.at (2)
			else
				if going_left = true then
					surface := surface_left

					x := x - 3
					if x < 0 then
						x := 0
					end
				else
					surface := surface_right
					x := x + 3
					if x > a_background.width - (current.width // 3) then
						x := a_background.width - (current.width // 3)
					end
				end

				if temps < 8 then
						sub_x := animation.at (3)
						sub_y := animation.at (4)
					else
						sub_x := animation.at (5)
						sub_y := animation.at (6)
					end
				temps := temps+1
				if temps > 16 then
					temps := 1
				end
			end
		end

	play_sound
		do
			source.stop					-- Be sure that the queue buffer is empty on the sound_source object (when stop, the source queue is clear)
			sound.restart						-- Be sure that the sound is at the beginning
			source.queue_sound (sound)
			source.play					-- Play the source
		end
end
