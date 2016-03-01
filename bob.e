note
	description: "Summary description for {BOB}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOB

inherit
	SPRITE

create
	make

feature
	make
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make("animation.png")
			l_image.open
			make_from_image (l_image)

			create surface_left.make_from_image (l_image)

			create {GAME_SURFACE_ROTATE_ZOOM} surface_right.make_zoom_x_y (surface_left, -1, 1, True)

			temps := 1

			create animation.make(6)
			animation.extend (surface_right.width // 3)	-- Be sure to place the image standing still first
			animation.extend (0)
			animation.extend (0)
			animation.extend (0)
			animation.extend ((surface_right.width // 3) * 2)
			animation.extend (0)

			surface := surface_right
			animation_x := animation.at (1)
			animation_y := animation.at (2)
	end

	go_right
		do
			going_right:= true
			print ("Go right%N")
		end

	go_left
		do
			going_left:= true
			print("Go left%N")
		end

	stop_right
		do
			going_right:= false
			print("stop right%N")
		end

	stop_left
		do
			going_left := false
			print("stop left%N")
		end

	going_right:BOOLEAN

	going_left:BOOLEAN

	surface_right:GAME_SURFACE

	surface_left:GAME_SURFACE

	animation:ARRAYED_LIST[INTEGER]

	surface:GAME_SURFACE

	animation_x:INTEGER

	animation_y:INTEGER



	temps:INTEGER


	animate(a_background:BACKGROUND)
		do
			if going_right = false and going_left = false then
				animation_x := animation.at (1)
				animation_y := animation.at (2)
			else
				if going_left = true then
					surface := surface_left

					x := x - 2
					if x < 0 then
						x := 0
					end
				else
					surface := surface_right
					x := x + 2
					if x > a_background.width - (current.width // 3) then
						x := a_background.width - (current.width // 3)
					end
				end

				if temps < 8 then
						animation_x := animation.at (3)
						animation_y := animation.at (4)
					else
						animation_x := animation.at (5)
						animation_y := animation.at (6)
					end
				temps := temps+1
				if temps > 16 then
					temps := 1
				end
			end
		end
end
