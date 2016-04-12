note
	description: "Les balles que le personnage doit tirer"
	author: "Simon Gagné"
	date: "04/04/2016"

class
	BALL

inherit
	DRAWABLE

create
	make

feature {NONE} -- Initialization

	make(a_x:INTEGER; a_y:INTEGER; a_size:INTEGER; a_going_right:BOOLEAN)
		local
			l_image:IMG_IMAGE_FILE
			l_path:STRING
		do
			l_path:=""
			has_error := False
			if a_size = 1 then
				l_path := "yball1.png"
			elseif a_size = 2 then
				l_path := "yball2.png"
			elseif a_size = 3 then
				l_path := "yball3.png"
			end
			create l_image.make (l_path)
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					x:=a_x
					y:=a_y
					speed := 1
					top_speed:=22
					go_right:= a_going_right
					go_up:=False
					move_timer:=1
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end
		end

feature
	move(a_background:BACKGROUND)
		do
			move_timer := move_timer + 1
			if move_timer = 3 then

				if go_up then
					y := y + speed
					if speed = 0 then
						go_up:=false
					end
				else
					y := y + speed
					if speed = top_speed then
						speed := speed - speed - speed - 1 --Change le speed à -9 avant de faire le y = y - 10
						go_up:=true
					end

				end

				speed := speed + 1

				move_timer := 1
			end

			if go_right then
				x := x + 1
				if x > (a_background.width - current.width) then
					go_right:= False
				end
			else
				x:= x - 1
				if x < 0 then
					go_right:=True
				end
			end

	end

	speed:INTEGER
	top_speed:INTEGER
	go_right:BOOLEAN
	go_up:BOOLEAN
	move_timer:INTEGER

end
