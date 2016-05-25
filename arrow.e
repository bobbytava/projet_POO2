note
	description: "Repr�sente la fl�che que le personnage tire."
	author: "Simon Gagn�"
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
			--Constructeur de `Current'
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
					source:=audio_library.last_source_added
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
			--Rend la fl�che "tir�e" � la position "x" envoy�e en argument.
			--Joue aussi un son
		do
			is_fired:=true
			x:= a_x
			play_sound
		end

	reset
			--R�initialise la fl�che � un �tat "non-tir�e" ainsi que sa position "y" � la position de la t�te du personnage
		do
			is_fired:=false
			current.set_y (387)
		end

	is_fired:BOOLEAN
			--Attribut qui d�termine si la fl�che est lanc�e

	play_sound
			--R�initialise le son et le joue
		do
			source.stop
			sound.restart
			source.queue_sound (sound)
			source.play
		end
end
