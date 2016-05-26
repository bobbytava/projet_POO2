note
	description: "Repr�sente ce qui fait du son"
	author: "Simon Gagn�"
	date: "04/04/2016"

deferred class
	HEARABLE

inherit
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	EXCEPTIONS


feature
	play_sound
			--Fonction abstraite
			--Fait l'action de jouer la `source'
	deferred
	end

	source:AUDIO_SOURCE
			--Repr�sente l'audio du son � jouer

	sound:AUDIO_SOUND_FILE
			--R�pr�sente le fichier audio qui deviendra la source
end
