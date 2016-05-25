note
	description: "Repr�sente ce qui est affichable � l'�cran"
	author: "Simon Gagn�"
	date: "04/04/2016"

deferred class
	DRAWABLE

inherit
	GAME_SURFACE
	rename
		make as make_surface
	end

feature
	x:INTEGER assign set_x
			-- Vertical position of `Current'

	y:INTEGER assign set_y
			-- Horizontal position of `Current'

	set_x(a_x:INTEGER)
			-- Assign the value of `x' with `a_x'
		do
			x := a_x
		end

	set_y(a_y:INTEGER)
			-- Assign the value of `y' with `a_y'
		do
			y := a_y
		end

end
