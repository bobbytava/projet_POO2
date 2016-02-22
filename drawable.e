note
	description: "Summary description for {DRAWABLE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	DRAWABLE

inherit
	GAME_SURFACE

feature

	pos_x:INTEGER assign set_pos_x

	pos_y:INTEGER assign set_pos_y

	set_pos_x(a_x:INTEGER)
			-- Assigne la valeur de `a_x' à `pos_x'
		do
			pos_x := a_x
		end

	set_pos_y(a_y:INTEGER)
			-- Assigne la valeur de `a_y' à `pos_y'
		do
			pos_y := a_y
		end

end
