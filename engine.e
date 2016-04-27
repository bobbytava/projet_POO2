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
			image_file_library.enable_image (true, true, false)  -- Enable PNG image

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
			l_lvl1:LEVEL
			l_lvl2:LEVEL
			l_lvl3:LEVEL
			l_arrow:ARROW

		do

			create l_background.make
			l_background.play_sound
			create l_character.make
			l_character.set_x (400)
			l_character.set_y (387)

			create l_lvl1.make_lvl1
			create l_lvl2.make_lvl2
			create l_lvl3.make_lvl3
			create array_levels.make
			array_levels.extend (l_lvl1)
			array_levels.extend (l_lvl2)
			array_levels.extend (l_lvl3)
			level:= array_levels.at(1)

			create l_arrow.make

			create l_window_builder
			l_window_builder.set_dimension (l_background.width, l_background.height)
			l_window_builder.set_title ("Bubble Trouble")
			l_window := l_window_builder.generate_window

			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?, l_character, l_arrow))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_character))
			game_library.iteration_actions.extend (agent on_iteration(?, l_character, l_background, l_arrow, l_window))
			game_library.launch
		end

feature
	on_iteration(a_timestamp:NATURAL_32; a_character:BOB; a_background:BACKGROUND; a_arrow:ARROW;
					a_window:GAME_WINDOW_SURFACED)
			-- Event that is launch at each iteration.
		local
			l_new_ball1:BALL
			l_new_ball2:BALL
		do
			-- Draw the scene
			a_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_background.width, a_background.height)
			a_window.surface.draw_surface (a_background, a_background.x, a_background.y)

			if a_arrow.is_fired then
				a_window.surface.draw_surface (a_arrow, a_arrow.x, a_arrow.y)
				a_arrow.y:=a_arrow.y - 5
				if a_arrow.y <= 0 then
					a_arrow.set_y(387)
					a_arrow.is_fired:=false
				end
			end

			a_window.surface.draw_sub_surface (a_character.surface, a_character.sub_x, a_character.sub_y, a_character.width // 3,
				a_character.height, a_character.x, a_character.y)
			from
				level.array_balls.start
			until
				level.array_balls.off
			loop
				a_window.surface.draw_sub_surface (level.array_balls.item, 0, 0,
					level.array_balls.item.width, level.array_balls.item.height, level.array_balls.item.x, level.array_balls.item.y)
				level.array_balls.item.move(a_background)
				check_collisions (level.array_balls.item, a_character, a_arrow)
				if a_character.is_dead then
					print("YOU DIED%N")
				end
				a_character.set_is_dead (false)
				if level.array_balls.item.is_dead then
					if level.array_balls.item.size /= 1 then
						create l_new_ball1.make (level.array_balls.item.x, level.array_balls.item.y, level.array_balls.item.size - 1,true)
						create l_new_ball2.make (level.array_balls.item.x, level.array_balls.item.y, level.array_balls.item.size - 1,false)
						l_new_ball1.set_speed (-8)
						l_new_ball2.set_speed (-8)
						level.array_balls.extend (l_new_ball1)
						level.array_balls.extend (l_new_ball2)
					end
					level.array_balls.item.play_sound

					if level.array_balls.islast then
						level.array_balls.move (-1)
						level.array_balls.remove_right
					else
						level.array_balls.remove
					end
					a_arrow.set_is_fired (false)
					a_arrow.set_y (387)
				end
				level.array_balls.forth
				if level.array_balls.is_empty then
					if level = array_levels.at (1) then
						level:=array_levels.at (2)
						a_character.set_x (500)
					elseif level = array_levels.at (2) then
						level:=array_levels.at (3)
						a_character.set_x (500)
					else
						print("YOU WON")
					end
				end
			end

			a_window.surface.draw_surface (a_background.footer, 0, 462)
			a_character.animate(a_background)

			-- Update modification in the screen
			audio_library.update
			a_window.update
		end


	check_collisions(a_ball:BALL; a_character:BOB; a_arrow:ARROW)
		do
			if a_ball.y + a_ball.height >= a_character.y and a_ball.x <= a_character.x + a_character.width // 3
																and a_ball.x + a_ball.width >= a_character.x then
				a_character.set_is_dead (true)
			end

			if a_ball.x <= a_arrow.x and a_ball.x + a_ball.width >= a_arrow.x and a_ball.y + a_ball.height >= a_arrow.y
																					and a_arrow.is_fired = true then
				a_ball.set_is_dead(true)
			end
		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_character:BOB; a_arrow:ARROW)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right then
					a_character.go_right
				elseif a_key_state.is_left then
					a_character.go_left
				elseif a_key_state.is_up then
					if not a_arrow.is_fired then
						a_arrow.fire(a_character.x + (a_character.width // 6)) -- divisé par 6 car 3 sprites d'animation
					end
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

	level:LEVEL
	array_levels:LINKED_LIST[LEVEL]
end
