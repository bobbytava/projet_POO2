note
	description : "Class 'main' du jeu"
	author		: "Simon Gagné"
	date        : "04/04/2016"

class
	APPLICATION

inherit
	GAME_LIBRARY_SHARED
	IMG_LIBRARY_SHARED
	AUDIO_LIBRARY_SHARED
	TEXT_LIBRARY_SHARED

create
	make

feature {NONE} -- Initialization

	make
			--Initialise les librairies, lance le jeu, et ferme les librairies lorsque le jeu ferme
		local
			engine:ENGINE
		do
			game_library.enable_video
			audio_library.enable_sound
			image_file_library.enable_image (true, true, false)
			text_library.enable_text

			create engine.make

			game_library.clear_all_events
			text_library.quit_library
			audio_library.quit_library
			image_file_library.quit_library
			game_library.quit_library
		end

end
