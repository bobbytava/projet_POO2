note
	description: "Représente ce qui fait du son"
	author: "Simon Gagné"
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
			--Représente l'audio du son à jouer

	sound:AUDIO_SOUND_FILE
			--Réprésente le fichier audio qui deviendra la source
end
