note
	description: "Contrôleur du jeu"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	ENGINE

inherit
	GAME_LIBRARY_SHARED
	IMG_LIBRARY_SHARED
	AUDIO_LIBRARY_SHARED	-- To use `audio_library'

create
	make

feature {NONE}  -- Initialization
	make
			-- Run application.
		do
			game_library.enable_video -- Enable the video functionalities
			audio_library.enable_sound	-- Permit to the Audio
			image_file_library.enable_image (true, false, false)  -- Enable PNG image

			run_game
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
			l_ball:BALL
			l_ball2:BALL
			l_ball3:BALL

		do

			create array_balls.make (0)
			create l_background.make
			l_background.play_sound
			create l_character.make
			l_character.set_x (400)
			l_character.set_y (340)

			create l_ball.make(600,153,1,true)
			create l_ball2.make(100,145,2,true)
			create l_ball3.make(300,125,3,true)
			array_balls.extend (l_ball)
			array_balls.extend (l_ball2)
			array_balls.extend (l_ball3)

			create l_window_builder
			l_window_builder.set_dimension (l_background.width, l_background.height)
			l_window_builder.set_title ("Bubble Trouble")
			l_window := l_window_builder.generate_window

			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_character))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_character))
			game_library.iteration_actions.extend (agent on_iteration(?, l_character, l_background, l_window))
			game_library.launch
		end

feature
	on_iteration(a_timestamp:NATURAL_32; a_character:BOB; a_background:BACKGROUND; a_window:GAME_WINDOW_SURFACED)
			-- Event that is launch at each iteration.
		do
			-- Draw the scene
			a_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_background.width, a_background.height)
			a_window.surface.draw_surface (a_background, a_background.x, a_background.y)
			a_window.surface.draw_sub_surface (a_character.surface, a_character.sub_x, a_character.sub_y, a_character.width // 3,
				a_character.height, a_character.x, a_character.y)
			from
				array_balls.start
			until
				array_balls.off
			loop
				a_window.surface.draw_sub_surface (array_balls.item, 0, 0,
					array_balls.item.width, array_balls.item.height, array_balls.item.x, array_balls.item.y)
				array_balls.item.move(a_background)
				array_balls.forth
			end
			a_character.animate(a_background)

			-- Update modification in the screen
			audio_library.update
			a_window.update
		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_character:BOB)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right then
					a_character.go_right
				elseif a_key_state.is_left then
					a_character.go_left
				elseif a_key_state.is_up then
					a_character.play_sound
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

	array_balls:ARRAYED_LIST[BALL]
end
