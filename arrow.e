note
	description: "Représente la flèche que le personnage tire."
	author: "Simon Gagné"
	date: "12/04/2016"

class
	ARROW

inherit
	DRAWABLE


create
	make

feature
	make
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make ("arrow.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					is_fired:=false
					y:= 387
				else
					make_surface(1,1)
				end
			else
					make_surface(1,1)
			end
		end

	fire(a_x:INTEGER)
		do
			is_fired:=true
			x:= a_x
		end

	unfire
		do
			is_fired:=false
		end

	is_fired:BOOLEAN assign set_is_fired

	set_is_fired(a_is_fired:BOOLEAN)
		do
			is_fired:=a_is_fired
		end
end
