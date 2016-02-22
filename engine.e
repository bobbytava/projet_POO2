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
			image_file_library.enable_image (true, false, false)  -- Enable PNG image (but not TIF or JPG).
			run_game  -- Run the core creator of the game.
			image_file_library.quit_library  -- Correctly unlink image files library
			game_library.quit_library  -- Clear the library before quitting
		end

	run_game
			-- Create ressources and launch the game
		local
			l_character:GINO
			l_window_builder:GAME_WINDOW_SURFACED_BUILDER
			l_window:GAME_WINDOW_SURFACED
		do
			create l_character.make("desert.png")
			create l_window_builder
			l_window_builder.set_dimension (l_character.width, l_character.height)
			l_window_builder.set_title ("Example Animation")
			l_window := l_window_builder.generate_window
			game_library.iteration_actions.extend (agent on_iteration(?, l_character, l_window))
			game_library.launch
		end

feature
	on_iteration(a_timestamp:NATURAL_32; a_desert:GAME_SURFACE; l_window:GAME_WINDOW_SURFACED)
			-- Event that is launch at each iteration.
		do
			-- Draw the scene
			l_window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, a_desert.width, a_desert.height)
			l_window.surface.draw_surface (a_desert, 0, 0)

			-- Update modification in the screen
			l_window.update
		end
end
