note
	description: "Contrôleur du jeu"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	ENGINE

inherit
	APPLICATION
	rename
		make as make_application
	end

create
	make

feature {NONE}  -- Initialization
	make
			-- Run application.
		do
			run_game
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
			l_font_64:TEXT_FONT
			l_font_48:TEXT_FONT
			l_text_surface_died:TEXT_SURFACE_BLENDED
			l_text_surface_win:TEXT_SURFACE_BLENDED
			l_text_surface_title:TEXT_SURFACE_BLENDED
			l_text_surface_play:TEXT_SURFACE_BLENDED
			l_text_surface_network:TEXT_SURFACE_BLENDED
			l_text_surface_quit:TEXT_SURFACE_BLENDED
			l_text_surface_instructions_restart:TEXT_SURFACE_BLENDED
			l_text_surface_instructions_quit:TEXT_SURFACE_BLENDED
			l_text_surface_1:TEXT_SURFACE_BLENDED
			l_text_surface_2:TEXT_SURFACE_BLENDED
			l_text_surface_3:TEXT_SURFACE_BLENDED
			l_text_surface_host:TEXT_SURFACE_BLENDED
			l_text_surface_join:TEXT_SURFACE_BLENDED
			l_text_surface_wait_connection:TEXT_SURFACE_BLENDED
			l_text_surface_back:TEXT_SURFACE_BLENDED
			l_text_surface_enter_address:TEXT_SURFACE_BLENDED
			l_image_selection_arrow:IMG_IMAGE_FILE
		do

			create l_background.make
			l_background.play_sound
			create l_character.make(400, 387)

			create l_lvl1.make_lvl1
			create l_lvl2.make_lvl2
			create l_lvl3.make_lvl3
			create array_levels.make
			array_levels.extend (l_lvl1)
			array_levels.extend (l_lvl2)
			array_levels.extend (l_lvl3)
			level:= array_levels.at(1)


			create l_font_64.make ("font.ttf", 64)
			if l_font_64.is_openable then
				l_font_64.open
			end

			create l_font_48.make ("font.ttf", 48)
			if l_font_48.is_openable then
				l_font_48.open
			end

			create Red.make_rgb(255,0,0)

			create l_text_surface_died.make ("YOU DIED", l_font_64, RED)
			create l_text_surface_win.make ("YOU WON", l_font_64, Red)
			create l_text_surface_title.make ("BUBBLE TROUBLE", l_font_64, Red)
			create l_text_surface_play.make ("Play", l_font_48, Red)
			create l_text_surface_network.make ("Host/join a game", l_font_48, Red)
			create l_text_surface_quit.make ("Quit", l_font_48, Red)
			create l_text_surface_instructions_restart.make ("Press Enter to restart", l_font_48, Red)
			create l_text_surface_instructions_quit.make ("Press Esc to quit", l_font_48, Red)
			create l_text_surface_1.make ("1", l_font_48, Red)
			create l_text_surface_2.make ("2", l_font_48, Red)
			create l_text_surface_3.make ("3", l_font_48, Red)
			create l_text_surface_host.make ("Host a game", l_font_48, Red)
			create l_text_surface_join.make ("Join a game", l_font_48, Red)
			create l_text_surface_wait_connection.make ("You are waiting for someone to join", l_font_48, Red)
			create l_text_surface_back.make("Back", l_font_48, Red)
			create l_text_surface_enter_address.make ("Enter the address you want to join (ip:port)",l_font_48, Red)

			selected_main_menu_option:=1
			selected_menu_network_option:=1

			create l_window_builder
			l_window_builder.set_dimension (l_background.width, l_background.height)
			l_window_builder.set_title ("Bubble Trouble")
			l_window := l_window_builder.generate_window

			is_gameover:= false
			is_menu:= true
			is_main_menu:=true
			is_menu_network:=false
			is_menu_network_host:=false
			is_menu_network_join:=false
			address_input:=""
			level_is_new:=true
			times_through:=1

			port_string:=""
			server_address:=""
			create server_socket.make_empty
			create client_socket.make_empty

			create other_player_character.make(400,387)

			create l_image_selection_arrow.make("selection_arrow.png")
			if l_image_selection_arrow.is_openable then
				l_image_selection_arrow.open
				if l_image_selection_arrow.is_open then
					create selection_arrow.make_from_image (l_image_selection_arrow)
					selection_arrow_x:=200
					selection_arrow_y:=162
				else
					create selection_arrow.make(1,1)
				end
			else
				create selection_arrow.make(1,1)
			end

			game_library.quit_signal_actions.extend (agent on_quit)
			l_window.key_pressed_actions.extend (agent on_key_pressed(?, ?,l_window , l_character))
			l_window.key_released_actions.extend (agent on_key_released(?,?,  l_character))
			l_window.text_input_actions.extend (agent on_text_input)
			game_library.iteration_actions.extend (agent on_iteration(?, l_character, l_background, l_window, l_text_surface_died,
																		l_text_surface_win, l_text_surface_title, l_text_surface_play,
																		l_text_surface_network, l_text_surface_quit, l_text_surface_instructions_restart,
																		l_text_surface_instructions_quit, l_text_surface_1, l_text_surface_2,
																		l_text_surface_3, l_text_surface_host, l_text_surface_join, l_text_surface_wait_connection,
																		l_text_surface_back, l_text_surface_enter_address, l_font_48))
			game_library.launch
		end

feature
	on_iteration(a_timestamp:NATURAL_32; a_character:BOB; a_background:BACKGROUND;
					a_window:GAME_WINDOW_SURFACED; a_text_surface_died, a_text_surface_win, a_text_surface_title,
					a_text_surface_play, a_text_surface_network, a_text_surface_quit,
					a_text_surface_instructions_restart, a_text_surface_instructions_quit, a_text_surface_1,
					a_text_surface_2, a_text_surface_3, a_text_surface_host, a_text_surface_join, a_text_surface_wait_connection,
					a_text_surface_back, a_text_surface_enter_address:TEXT_SURFACE_BLENDED; a_font_48:TEXT_FONT)
			-- Event that is launch at each iteration.
		local
			l_new_ball1:BALL
			l_new_ball2:BALL
			l_text_surface_score:TEXT_SURFACE_BLENDED
			l_text_surface_address:TEXT_SURFACE_BLENDED
			l_text_surface_address_input:TEXT_SURFACE_BLENDED
			l_final_score:STRING
		do
			-- Draw the scene
			a_window.surface.draw_surface (a_background, a_background.x, a_background.y)

			if not is_menu then

				if not is_gameover then

					draw_arrow(a_window ,a_character.arrow)
					if is_connected then
						draw_arrow (a_window, other_player_character.arrow)
					end

					a_window.surface.draw_sub_surface (a_character.surface, a_character.sub_x, a_character.sub_y, a_character.width // 3,
						a_character.height, a_character.x, a_character.y)
					from
						level.array_balls.start
					until
						level.array_balls.off
					loop
						a_window.surface.draw_surface (level.array_balls.item, level.array_balls.item.x, level.array_balls.item.y)
						if not level_is_new then

							level.array_balls.item.move(a_background)
							check_collisions (level.array_balls.item, a_character, a_character.arrow)
							if is_connected then
								check_collisions (level.array_balls.item, other_player_character, other_player_character.arrow)
							end
							if a_character.is_dead then
								is_gameover:=true
								a_character.play_sound
							end
							if other_player_character.is_dead then
								is_gameover:=true
								other_player_character.play_sound
							end
							if level.array_balls.item.is_dead then

								if level.array_balls.item.player_who_killed = 1 then
									a_character.set_score (a_character.score + level.array_balls.item.score)
									a_character.arrow.reset
								else
									other_player_character.set_score (other_player_character.score + level.array_balls.item.score)
									other_player_character.arrow.reset
								end

								if level.array_balls.item.size /= 1 then
									create l_new_ball1.make (level.array_balls.item.x, level.array_balls.item.y, level.array_balls.item.size - 1,true)
									create l_new_ball2.make (level.array_balls.item.x, level.array_balls.item.y, level.array_balls.item.size - 1,false)
									l_new_ball1.set_speed (-8)
									l_new_ball2.set_speed (-8)
									level.array_balls.extend (l_new_ball1)
									level.array_balls.extend (l_new_ball2)
								end
								level.array_balls.item.play_sound
								a_character.arrow.reset

								if level.array_balls.islast then
									level.array_balls.move (-1)
									level.array_balls.remove_right
								else
									level.array_balls.remove
								end

							end
						end
						level.array_balls.forth
						if level.array_balls.is_empty then
							level_is_new:=true
							if is_connected then
								if is_host then
									a_character.set_x (500)
								else
									a_character.set_x (600)
								end
							else
								a_character.set_x (500)
							end
							times_through:=0
							if level = array_levels.at (1) then
								level:=array_levels.at (2)
							elseif level = array_levels.at (2) then
								level:=array_levels.at (3)
							else
								is_gameover:=true
								level_is_new:= false
							end
						end
					end

				else
					if a_character.is_dead or other_player_character.is_dead then
						a_window.surface.draw_surface (a_text_surface_died, 512-a_text_surface_died.width//2, 50)
					else
						a_window.surface.draw_surface (a_text_surface_win, 512-a_text_surface_win.width//2, 50)
					end
					l_final_score:=""
					l_final_score.append_integer (a_character.score)
					create l_text_surface_score.make ("You scored " + l_final_score + " points", a_font_48, Red)
					a_window.surface.draw_surface (l_text_surface_score, 512-l_text_surface_score.width//2, 200)
					a_window.surface.draw_surface (a_text_surface_instructions_restart, 512-a_text_surface_instructions_restart.width//2, 300)
					a_window.surface.draw_surface (a_text_surface_instructions_quit, 512-a_text_surface_instructions_quit.width//2, 400)
				end
				if is_connected then
					if is_host then
						if attached client_socket as la_socket then
							la_socket.independent_store (a_character)
						end
						receive_character(client_socket)
					else
						receive_character (server_socket)
					end
				end

				if level_is_new then
					if times_through = 1 then
						a_window.surface.draw_surface (a_text_surface_3, 512-a_text_surface_3.width//2, 5)
					elseif times_through = 2 then
						a_window.surface.draw_surface (a_text_surface_2, 512-a_text_surface_2.width//2, 5)
					elseif times_through = 3 then
						a_window.surface.draw_surface (a_text_surface_1, 512-a_text_surface_1.width//2, 5)
					end
				end

			else
				a_window.surface.draw_surface (a_text_surface_title, 512-a_text_surface_title.width//2, 30)

				if is_main_menu then
					a_window.surface.draw_surface (a_text_surface_play, 512-a_text_surface_play.width//2, 150)
					a_window.surface.draw_surface (a_text_surface_network, 512-a_text_surface_network.width//2, 250)
					a_window.surface.draw_surface (a_text_surface_quit, 512-a_text_surface_quit.width//2, 350)

					if selected_main_menu_option = 1 then
						selection_arrow_y:=162
					elseif selected_main_menu_option = 2 then
						selection_arrow_y:=262
					else
						selection_arrow_y:=362
					end
				elseif is_menu_network then
					a_window.surface.draw_surface (a_text_surface_host,512-a_text_surface_host.width//2, 150)
					a_window.surface.draw_surface (a_text_surface_join,512-a_text_surface_join.width//2, 250)
					a_window.surface.draw_surface (a_text_surface_back,512-a_text_surface_back.width//2, 350)
					if selected_menu_network_option = 1 then
						selection_arrow_y:=162
					elseif selected_menu_network_option = 2 then
						selection_arrow_y:=262
					else
						selection_arrow_y:=362
					end
				elseif is_menu_network_host then
					port_string:=""
					port_string.append_integer (server_socket.port)
					create l_text_surface_address.make ("Your address is " + server_address + ":" + port_string, a_font_48, Red)
					a_window.surface.draw_surface (l_text_surface_address,512-l_text_surface_address.width//2, 150)
					a_window.surface.draw_surface (a_text_surface_wait_connection,512-a_text_surface_wait_connection.width//2, 225)
					a_window.surface.draw_surface (a_text_surface_back,512-a_text_surface_back.width//2, 400)
					selection_arrow_y:=412
					has_gone_through_menu_network_once:=true
				else
					a_window.surface.draw_surface (a_text_surface_enter_address, 512-a_text_surface_enter_address.width//2, 150)
					if not address_input.is_empty then
						create l_text_surface_address_input.make (address_input, a_font_48, Red)
						a_window.surface.draw_surface (l_text_surface_address_input,512-l_text_surface_address_input.width//2, 225)
					end
					a_window.surface.draw_surface (a_text_surface_back,512-a_text_surface_back.width//2, 400)
					if selected_menu_network_join_option = 1 then
						selection_arrow_y:=237
					else
						selection_arrow_y:=412
					end
				end


				a_window.surface.draw_surface (selection_arrow, selection_arrow_x, selection_arrow_y)
			end

			a_window.surface.draw_surface (a_background.footer, 0, 462)
			a_character.animate(a_background)

			-- Update modification in the screen
			audio_library.update
			a_window.update

			if level_is_new and not is_menu then
				if times_through > 0 then
					game_library.delay (1000)
				end
				times_through:= times_through + 1
				if times_through >3 then
					level_is_new:=false
					times_through:=1
				end

			end

			if has_gone_through_menu_network_once then
				server_listen
				is_menu_network_host:=false
				is_menu:=false
			end

		end

	draw_arrow(a_window:GAME_WINDOW_SURFACED; a_arrow:ARROW)
		do
			if a_arrow.is_fired then
				a_window.surface.draw_surface (a_arrow, a_arrow.x, a_arrow.y)
				a_arrow.y:=a_arrow.y - 5
				if a_arrow.y <= 0 then
					a_arrow.reset
				end
					end
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
				if a_character = other_player_character then
					a_ball.set_player_who_killed (2)
				else
					a_ball.set_player_who_killed (1)
				end

			end
		end

	choose_option(a_window:GAME_WINDOW_SURFACED)
		do
			if is_main_menu then
				is_main_menu:=false
				if selected_main_menu_option = 1 then
					is_menu:=false
				elseif selected_main_menu_option = 2 then
					is_menu_network:=true
					selected_menu_network_option:=1
				else
					game_library.stop
				end
			elseif is_menu_network then
				is_menu_network:=false
				if selected_menu_network_option = 1 then
					is_menu_network_host:=true
					setup_server
				elseif selected_menu_network_option = 2 then
					is_menu_network_join:=true
					selected_menu_network_join_option:=1
					a_window.start_text_input
				else
					is_main_menu:=true
					selected_main_menu_option:=1
				end
			elseif is_menu_network_host then
				is_menu_network_host:=false
				is_menu_network:=true
				selected_menu_network_option:=1
			else
				if selected_menu_network_join_option = 1 then
					setup_client
				else
					is_menu_network_join:=false
					address_input:=""
					is_menu_network:=true
					selected_menu_network_option:=1
				end
			end

		end

	setup_server
		local
			l_port:INTEGER
		do
			l_port:=1234
			create server_socket.make_server_by_port (l_port)
			if server_socket.is_bound then
				if attached server_socket.address as la_address then
					server_address:=la_address.host_address.host_address
					is_connected:=false
				end
			end
		end

	server_listen
		do
			server_socket.listen (1)
			server_socket.accept
			if attached server_socket.accepted as la_client_socket then
				if attached la_client_socket.peer_address as la_client_adresse then
					client_socket:=la_client_socket
					is_connected:=true
				end
			end
		end

	setup_client

		local
			l_socket: NETWORK_STREAM_SOCKET
			l_adresse_factory:INET_ADDRESS_FACTORY
			l_address:STRING
			l_port:INTEGER
		do
			l_address:=address_input.substring (1, address_input.count-5)
			l_port:=(address_input.substring (address_input.count-3, address_input.count)).to_integer
			create l_adresse_factory
			if attached l_adresse_factory.create_from_name (l_address) as la_address then
				create l_socket.make_client_by_address_and_port (la_address, l_port)
				server_socket := l_socket
				if  l_socket.invalid_address then
					address_input.wipe_out
					has_connection_error:=true

				else
					l_socket.connect
					if not l_socket.is_connected then
						has_connection_error := True
					end
				end
			end
		end

	receive_character(a_socket:NETWORK_STREAM_SOCKET)
		local
			l_retry:BOOLEAN		-- Par défaut, l_retry sera à `False'
		do
			if not l_retry then		-- Si la clause 'rescue' n'a pas été utilisé, reçoit le livre
				if attached {BOB} a_socket.retrieved as la_character then
					other_player_character:=la_character
				end
			end
		rescue	-- Permet d'attraper un exception
			l_retry := True
			retry
		end

	reset_game(a_character:BOB)
		local
			l_new_lvl1:LEVEL
			l_new_lvl2:LEVEL
			l_new_lvl3:LEVEL
		do
			create l_new_lvl1.make_lvl1
			create l_new_lvl2.make_lvl2
			create l_new_lvl3.make_lvl3
			array_levels.wipe_out
			array_levels.extend (l_new_lvl1)
			array_levels.extend (l_new_lvl2)
			array_levels.extend (l_new_lvl3)
			level:= array_levels.at(1)
			level_is_new:=true
			is_gameover:=false
			a_character.set_is_dead (false)
			a_character.set_x (400)
			a_character.set_score (0)
			a_character.arrow.reset

		end

	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE; a_window:GAME_WINDOW_SURFACED a_character:BOB)
			-- Action when a keyboard key has been pushed
		do
			if not a_key_state.is_repeat then		-- Be sure that the event is not only an automatic repetition of the key
				if a_key_state.is_right and not level_is_new then
					a_character.go_right
				elseif a_key_state.is_left and not level_is_new then
					a_character.go_left
				elseif a_key_state.is_up then
					if is_menu then
						if is_main_menu then
							if selected_main_menu_option > 1 then
								selected_main_menu_option:= selected_main_menu_option - 1
							else
								selected_main_menu_option:=1
							end
						elseif is_menu_network then
							if selected_menu_network_option > 1 then
								selected_menu_network_option:= selected_menu_network_option - 1
							else
								selected_menu_network_option:=1
							end
						elseif is_menu_network_join then
							if selected_menu_network_join_option > 1 then
								selected_menu_network_join_option:= selected_menu_network_join_option - 1
							else
								selected_menu_network_join_option:=1
							end
						end
					elseif not a_character.arrow.is_fired and not level_is_new and not is_gameover then
						a_character.arrow.fire(a_character.x + (a_character.width // 6)) -- divisé par 6 car 3 sprites d'animation
					end
				elseif a_key_state.is_down then
					if is_main_menu then
						if selected_main_menu_option < 3  then
							selected_main_menu_option:= selected_main_menu_option + 1
						else
							selected_main_menu_option:=3
						end
					elseif is_menu_network then
						if selected_menu_network_option < 3  then
							selected_menu_network_option:= selected_menu_network_option + 1
						else
							selected_menu_network_option:=3
						end
					elseif is_menu_network_join then
						if selected_menu_network_join_option < 2  then
							selected_menu_network_join_option:= selected_menu_network_join_option + 1
						else
							selected_menu_network_join_option:=2
						end
					end
				elseif a_key_state.is_return then
					if is_menu then
						choose_option(a_window)
					elseif is_gameover then
						reset_game(a_character)
					end
				elseif a_key_state.is_escape then
					game_library.stop
				elseif a_key_state.is_backspace and not address_input.is_empty then
					address_input := address_input.substring (1, address_input.count - 1)
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

	on_text_input(a_timestamp:NATURAL_32; a_text:STRING_32)
			-- When the user write a character on the keyboard (does not handle special key like backspace, return, etc.
		do
			address_input:= address_input + a_text
		end


	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end

	level:LEVEL
	array_levels:LINKED_LIST[LEVEL]
	is_menu:BOOLEAN
	is_main_menu:BOOLEAN
	is_menu_network:BOOLEAN
	is_menu_network_host:BOOLEAN
	is_menu_network_join:BOOLEAN
	is_gameover:BOOLEAN
	level_is_new:BOOLEAN
	server_socket:NETWORK_STREAM_SOCKET
	client_socket:NETWORK_STREAM_SOCKET
	server_address:STRING
	port_string:STRING
	is_connected:BOOLEAN
	is_host:BOOLEAN
	is_join:BOOLEAN
	has_connection_error:BOOLEAN
	has_gone_through_menu_network_once:BOOLEAN

	other_player_character:BOB

	times_through:INTEGER
	selection_arrow:GAME_SURFACE
	selection_arrow_x:INTEGER
	selection_arrow_y:INTEGER
	selected_main_menu_option:INTEGER
	selected_menu_network_option:INTEGER
	selected_menu_network_join_option:INTEGER
	address_input:STRING
	Red:GAME_COLOR
end
