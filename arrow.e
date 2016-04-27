note
	description: "Représente la flèche que le personnage tire."
	author: "Simon Gagné"
	date: "12/04/2016"

class
	ARROW

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
			create l_image.make ("arrow.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					is_fired:=false
					y:= 387

				else
					make_surface(1,1)
				end
			else
					make_surface(1,1)
			end

			create sound.make("arrow.wav")
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

	fire(a_x:INTEGER)
		do
			is_fired:=true
			x:= a_x
			play_sound
		end

	unfire
		do
			is_fired:=false
		end

	is_fired:BOOLEAN assign set_is_fired

	set_is_fired(a_is_fired:BOOLEAN)
		do
			is_fired:=a_is_fired
		end

	play_sound
		do
			source.stop					-- Be sure that the queue buffer is empty on the sound_source object (when stop, the source queue is clear)
			sound.restart						-- Be sure that the sound is at the beginning
			source.queue_sound (sound)
			source.play					-- Play the source
		end
end
