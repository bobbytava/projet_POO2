note
	description : "Class 'main' du jeu"
	author		: "Simon Gagn�"
	date        : "04/04/2016"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			engine:ENGINE
		do
			create engine.make
		end

end
