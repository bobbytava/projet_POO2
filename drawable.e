note
	description: "Représente ce qui est affichable à l'écran"
	author: "Simon Gagné"
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

	sub_x:INTEGER assign set_sub_x

	sub_y:INTEGER assign set_sub_y

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

	set_sub_x(a_x:INTEGER)
			-- Assign the value of `x' with `a_x'
		do
			sub_x := a_x
		end

	set_sub_y(a_y:INTEGER)
			-- Assign the value of `y' with `a_y'
		do
			sub_y := a_y
		end

end
