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
create
	make

feature {NONE}  -- Initialization
	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			image_file_library.enable_image (true, true, false)  -- Enable PNG image (but not TIF or JPG).
			run_game  -- Run the core creator of the game.
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
			create l_background.make("desert.png")
			create l_character.make
			l_character.x := 400
			l_character.y := 350
			create l_window_builder
			l_window_builder.set_dimension (l_background.width, l_background.height)
			l_window_builder.set_title ("Example Animation")
			l_window := l_window_builder.generate_window
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
			l_window.update
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

	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end
end
