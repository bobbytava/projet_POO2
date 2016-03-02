note
	description: "Summary description for {HEARABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	HEARABLE

inherit
	SOUND_CONTROLLER


feature
	play_sound
	do
	end

	source:AUDIO_SOURCE

	sound:AUDIO_SOUND_FILE
end
