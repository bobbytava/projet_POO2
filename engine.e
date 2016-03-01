note
	description: "Summary description for {ENGINE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ENGINE

inherit
	GAME_LIBRARY_SHARED
	IMG_LIBRARY_SHARED
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'
	EXCEPTIONS
create
	make

feature {NONE}  -- Initialization
	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			audio_library.enable_sound	-- Permit to the Audio
			image_file_library.enable_image (true, true, false)  -- Enable PNG image (but not TIF or JPG).
			run_game  -- Run the core creator of the game.
			audio_library.quit_library	-- Properly quit the library
			image_file_library.quit_library  -- Correctly unlink image files library
			game_library.quit_library  -- Clear the library before quitting
		end

	run_game
			-- Create ressources and launch the game
		local
			l_background:BACKGROUND
			l_window_builder:GAME_WINDOW_SURFACED_BUILDER
			l_window:GAME_WINDOW_SURFACED
			l_character:BOB
		do
			create l_background.make
			create l_character.make
			l_character.x := 400
			l_character.y := 350
			create l_window_builder
			l_window_builder.set_dimension (l_background.width, l_background.height)
			l_window_builder.set_title ("Example Animation")
			l_window := l_window_builder.generate_window

			set_sound(l_window)	-- Set the sound system to play the music and the sound on space key press

			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_character))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_character))
			game_library.iteration_actions.extend (agent on_iteration(?, l_background,l_character, l_window))
			game_library.launch
		end

feature
	on_iteration(a_timestamp:NATURAL_32; a_background:BACKGROUND; a_character:BOB; l_window:GAME_WINDOW_SURFACED)
			-- Event that is launch at each iteration.
		do
			-- Draw the scene
			l_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_background.width, a_background.height)
			l_window.surface.draw_surface (a_background, 0, 0)
			l_window.surface.draw_sub_surface (a_character.surface, a_character.animation_x, a_character.animation_y, a_character.width // 3, a_character.height, a_character.x, a_character.y)
			a_character.animate(a_background)

			-- Update modification in the screen
			audio_library.update
			l_window.update
		end

	set_sound(a_window:GAME_WINDOW)
			-- Prepare sound and sound source, play the music and set the
			-- on space key press event of `a_window' to play a sound.
		local
			l_sound,l_music_intro,l_music_loop:AUDIO_SOUND_FILE
			sound_source,music_source:AUDIO_SOURCE	-- You need one source for each sound you want to be playing at the same time.
		do
			create l_sound.make ("sound.aif")			-- This sound will be played when the user press the space bar.
			create l_music_intro.make ("intro.ogg")		-- This sound will be played once at the begining of the music
			create l_music_loop.make ("loop.flac")		-- This sound will be loop until the application stop.
														-- The library can use every sound file format that the libsndfile library can use (see: http://www.mega-nerd.com/libsndfile)
			if l_sound.is_openable and l_music_intro.is_openable and l_music_loop.is_openable then
				l_sound.open
				l_music_intro.open
				l_music_loop.open
				if l_sound.is_open and l_music_intro.is_open and l_music_loop.is_open then
					audio_library.sources_add
					music_source:=audio_library.last_source_added	-- The first source will be use for playing the music
					audio_library.sources_add
					sound_source:=audio_library.last_source_added	-- The second source will be use for playing the space sound

					music_source.queue_sound (l_music_intro)				-- Playing the intro first
					music_source.queue_sound_infinite_loop (l_music_loop)	-- After the intro end, loop the music loop

					a_window.key_pressed_actions.extend (agent on_key_down_sound(?, ?, l_sound,sound_source))	-- When a key is pressed, the on_key_down will be launch
																														-- The on_key_down routine will receive the sound and the source
																														-- Note that you can add more than one event routine for an event

					music_source.play	-- Play the music
				else
					print("Cannot open sound files.")
					die(1)
				end
			else
				print("Sound files not valid.")
				die(1)
			end
		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_character:BOB)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right then
					a_character.go_right
				elseif a_key_state.is_left then
					a_character.go_left
				end
			end

		end

	on_key_released(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_character:BOB)
			-- Action when a keyboard key has been released
		do
			if not a_key_state.is_repeat then		-- I don't know if a key release can repeat, but you never know...
				if a_key_state.is_right then
					a_character.stop_right
				elseif a_key_state.is_left then
					a_character.stop_left
				end
			end
		end

	on_key_down_sound(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_sound:AUDIO_SOUND; a_sound_source:AUDIO_SOURCE)
			-- When the space button is pressed (in `a_key_state'), play `a_sount' in `a_sound_source'
		do
			if a_key_state.is_up then			-- If the space key as been pressed, play the space sound
				a_sound_source.stop					-- Be sure that the queue buffer is empty on the sound_source object (when stop, the source queue is clear)
				a_sound.restart						-- Be sure that the sound is at the beginning
				a_sound_source.queue_sound (a_sound)	-- Queud the sound into the source queue
				a_sound_source.play					-- Play the source
			end
		end

	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end
end
