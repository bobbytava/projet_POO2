note
	description: "Image de fond"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	BACKGROUND

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
			create l_image.make("desert.png")
			l_image.open
			make_from_image (l_image)

			create sound.make("loop.flac")
			if sound.is_openable then
				sound.open
				if sound.is_open then
					audio_library.sources_add
					source:=audio_library.last_source_added	-- The first source will be use for playing the music
					source.queue_sound_infinite_loop(sound)
				else
					die(1)
				end
			else
				die(1)
			end
		end

	play_sound
	do
		source.play					-- Play the source
	end
end
