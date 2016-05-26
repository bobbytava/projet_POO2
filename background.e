note
	description: "Image de fond"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	BACKGROUND

inherit
	SPRITE
		redefine
			play_sound
		end

create
	make

feature
	make
			--Constructeur de `Current'
		local
			l_image:IMG_IMAGE_FILE
			l_image_footer:IMG_IMAGE_FILE
		do
			create l_image.make("background.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end

			create l_image_footer.make ("footer.png")
			if l_image_footer.is_openable then
				l_image_footer.open
				if l_image_footer.is_open then
					create footer.make_from_image (l_image_footer)
				else
					create footer.make (1, 1)
				end
			else
				create footer.make (1, 1)
			end

			create sound.make("loop.flac")
			if sound.is_openable then
				sound.open
				if sound.is_open then
					audio_library.sources_add
					source:=audio_library.last_source_added
					source.queue_sound_infinite_loop(sound)
				else
					die(1)
				end
			else
				die(1)
			end
		end

	play_sound
			--Joue le son
			--Ce son est joué en boucle tant et aussi longtemps que le programme boucle dans la boucle principale
		do
			source.play
		end

	footer:GAME_SURFACE
			--Surface représentant le plancher du jeu
			--Est dessinée à la fin de la séquence pour cacher la flèche lorsqu'elle est tirée
end
