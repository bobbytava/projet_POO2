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
	make(a_path:STRING)
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make(a_path)
			l_image.open
			make_from_image (l_image)
		end
end
