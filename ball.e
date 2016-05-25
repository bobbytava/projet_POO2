note
	description: "Les balles que le personnage doit tirer"
	author: "Simon Gagn�"
	date: "04/04/2016"

class
	BALL

inherit
	DRAWABLE
	HEARABLE
		redefine
			play_sound
		end

create
	make

feature {NONE} -- Initialization

	make(a_x:INTEGER; a_y:INTEGER; a_size:INTEGER; a_going_right:BOOLEAN)
			--Constructeur de `Current'
			--Re�oit en arguement la position "x" et "y", la grosseur de la balle (1 � 3)
			--ainsi que si la balle se dirige vers la droite ou non
		local
			l_image:IMG_IMAGE_FILE
			l_path:STRING
		do
			l_path:=""
			size:=a_size
			if size = 1 then
				l_path := "yball1.png"
				bounce_speed:= 15
			elseif size = 2 then
				l_path := "yball2.png"
				bounce_speed:= 19
			elseif size = 3 then
				l_path := "yball3.png"
				bounce_speed:=24
			end
			create l_image.make (l_path)
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
					x:=a_x
					y:=a_y
					speed := 1
					go_right:= a_going_right
					go_up:=False
					move_timer:=1
					is_dead:=false
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end

			create sound.make("pop.wav")
			if sound.is_openable then
				sound.open
				if sound.is_open then
					audio_library.sources_add
					source:=audio_library.last_source_added
				else
					print("Cannot open sound files.")
					die(1)
				end
			else
				print("Sound files not valid.")
				die(1)
			end
		end

feature
	move(a_background:BACKGROUND)
			--G�re le mouvement de la balle
			--Re�oit en argument le background afin d'avoir les limites de celui-ci
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
					if y + height >= 462 then --462 est le plancher
						y:= 462 - height
						speed := -bounce_speed
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

	size:INTEGER
			--Grosseur de la balle (de 1 � 3)

	speed:INTEGER assign set_speed
			--Repr�sente la vitesse de la balle

	bounce_speed:INTEGER
			--Repr�sente la vitesse de la balle apr�s avoir toucher le sol
			--N'�gale pas tout le temps "-speed" car une balle d�truite pr�s du sol
			--resterait pr�s du sol et serait impossible � d�tuire

	go_right:BOOLEAN
			--D�termine si la balle se dirige vers la droite ou non

	go_up:BOOLEAN
			--D�termine si la balle se dirige vers le haut ou non

	move_timer:INTEGER
			--Correspond � un minuteur qui s'incr�mente � chaque boucle de la boucle principale
			--Permet de ne pas animer les balles � chaque boucle de la boucle principale

	is_dead:BOOLEAN assign set_is_dead
			--D�termine si la balle � �t� tu�e

	set_speed(a_speed:INTEGER)
			--Assigne une valeur � l'attribut "speed"
			--La nouvelle valeur est envoy�e en argument
		do
			speed:=a_speed
		end

	set_is_dead(a_is_dead:BOOLEAN)
			--Assigne une valeur � l'attribut "is_dead"
			--La nouvelle valeur est envoy�e en argument
		do
			is_dead:= a_is_dead
		end



	play_sound
			--R�initialise le son et le joue
		do
			source.stop
			sound.restart
			source.queue_sound (sound)
			source.play
		end

end
