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
			-- Représente la valeur de la position horizontale de `Current'

	y:INTEGER assign set_y
			-- Représente la valeur de la position verticale de `Current'

	set_x(a_x:INTEGER)
			-- Assigne la valeur de `a_x' à `x'
		do
			x := a_x
		end

	set_y(a_y:INTEGER)
			-- Assigne la valeur de `a_y' à `y'
		do
			y := a_y
		end

end
