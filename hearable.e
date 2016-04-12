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
	do
	end

	source:AUDIO_SOURCE

	sound:AUDIO_SOUND_FILE
end
