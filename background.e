note
	description: "Summary description for {BACKGROUND}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BACKGROUND

inherit
	DRAWABLE

create
	make

feature
	make
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make("desert.png")
			l_image.open
			make_from_image (l_image)
		end
end
