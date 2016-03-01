note
	description: "Summary description for {SPRITE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	SPRITE

inherit
	DRAWABLE

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
