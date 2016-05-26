note
	description: "Personnage du jeu"
	author: "Simon Gagn�"
	date: "04/04/2016"

class
	BOB

inherit
	SPRITE
		redefine
			play_sound
		end

create
	make

feature --Initialization

	make(a_x:INTEGER; a_y:INTEGER)
			--Constructeur de `Current'
		local
			l_image:IMG_IMAGE_FILE
		do
			create l_image.make("animation.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
				else
					make_surface(1,1)
				end
			else
				make_surface(1,1)
			end

			set_x (a_x)
			set_y(a_y)
			create arrow.make

			create surface_left.make_from_image (l_image)

			create {GAME_SURFACE_ROTATE_ZOOM} surface_right.make_zoom_x_y (surface_left, -1, 1, True)

			animation_timer := 1

			create animation.make(6)
			animation.extend (surface_right.width // 3)
			animation.extend (0)
			animation.extend (0)
			animation.extend (0)
			animation.extend ((surface_right.width // 3) * 2)
			animation.extend (0)

			surface := surface_right
			sub_x := animation.at (1)
			sub_y := animation.at (2)

			is_dead := false

			create sound.make("wilhelm.wav")
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

	arrow:ARROW
			--La fl�che du joueur

	go_right
			--Fait en sorte que le personnage se dirige vers la droite
		do
			going_right:= true
		ensure
			Going_right_normal: going_right = true
		end

	go_left
			--Fait en sorte que le personnage se dirige vrs la gauche
		do
			going_left:= true
		ensure
			Going_left_normal: going_left = true
		end

	stop_right
			--Fait en sorte que le personnage ne se dirige plus vers la droite
		do
			going_right:= false
		ensure
			Going_right_normal: going_right = false
		end

	stop_left
			--Fait en sorte que le personnage ne se dirige plus vers la gauche
		do
			going_left := false
		ensure
			Going_left_normal: going_left = false
		end

	going_right:BOOLEAN
			--D�termine si le personnage se dirige vers la droite
			--Si `going_right' et `going_left' sont � "false", le personnage ne bouge pas

	going_left:BOOLEAN
			--D�termine si le personnage se dirige vers la gauche
			--Si `going_left' et `going_right' sont � "false", le personnage ne bouge pas

	surface_right:GAME_SURFACE
			--Repr�sente la surface du personnage lorsqu'il se dirige vers la droite
			--La surface comprend les 3 sprites de l'animation

	surface_left:GAME_SURFACE
			--Repr�sente la surface du personnage lorsqu'il se dirige vers la gauche
			--La surface comprend les 3 sprites de l'animation

	animation:ARRAYED_LIST[INTEGER]
			--Liste des coordonn�es des diff�rentes sprites de l'animation
			--Se lit comme suit : `x' de la sprite sans mouvement, `y' de la sprite sans mouvement,
			--`x' de la premi�re sprite d'animation, `y' de la premi�re sprite d'animation,
			--`x' de la deuxi�me sprite d'animation, `y' de la deuxi�me sprite d'animation

	surface:GAME_SURFACE
		--Repr�sente la surface � utiliser selon la direction du personnage (`surface_left' ou `surface_right')

	is_dead:BOOLEAN assign set_is_dead
			--D�termine si le joueur a �t� tu�

	sub_x:INTEGER
			--Repr�sente la position `x' dans l'image "animation.png" que l'on doit utiliser afin
			--de dessiner une partie de l'animation et non les 3 images d'animations compl�tes

	sub_y:INTEGER
			--Repr�sente la position `y' dans l'image "animation.png" que l'on doit utiliser afin
			--de dessiner une partie de l'animation et non les 3 images d'animations compl�tes

	set_is_dead(a_is_dead:BOOLEAN)
			--Assigne la valeur de `a_is_dead' � `is_dead'
		do
			is_dead := a_is_dead
		ensure
			Set_his_dead_normal:is_dead = a_is_dead
		end

	score:INTEGER assign set_score
			--Le nombre de points que le personnage a ammas� en tuant des balles

	set_score(a_score:INTEGER)
			--Assigne un score au joueur
		do
			score:=a_score
		ensure
			Set_score_normal:score = a_score
		end

	animation_timer:INTEGER
			--Un timer qui augmente de 1 � chaque it�ration de la boucle principale
			--Permet de cr�er un d�lai afin que l'animation ne se fasse pas � chaque int�ration de la boule principale


	animate(a_background:BACKGROUND)
			--Met � jour les valeurs de `sub_x' et `sub_y' afin que les coordonn�es de la sprite d'animation soient les bonnnes
			--Met � jour la valeur de `surface' afin d'utiliser la bonne animation (gauche/droite) selon les entr�es de l'usager
			--Met � jour la valeur de `x' afin que la position du personnage concorde aux entr�es de l'usager
			--Re�oit le background en argument afin de pouvoir calculer les limites de la valeur de `x' du personnage
		do
			if going_right = false and going_left = false then
				sub_x := animation.at (1)
				sub_y := animation.at (2)
			else
				if going_left = true then
					surface := surface_left

					x := x - 3
					if x < 0 then
						x := 0
					end
				else
					surface := surface_right
					x := x + 3
					if x > a_background.width - (current.width // 3) then
						x := a_background.width - (current.width // 3)
					end
				end

				if animation_timer < 8 then
					sub_x := animation.at (3)
					sub_y := animation.at (4)
				else
					sub_x := animation.at (5)
					sub_y := animation.at (6)
				end
				animation_timer := animation_timer+1
				if animation_timer > 16 then
					animation_timer := 1
				end
			end
		ensure
			Animation_timer_valid:animation_timer > 0 and animation_timer  < 17

		end

	play_sound
			--R�initialise le son et le joue
			--Correspond au son que `Current' fait lorsqu'il meurt
		do
			source.stop
			sound.restart
			source.queue_sound (sound)
			source.play
		end

	invariant
		y_is_valid:y = 387
		Animation_timer_valid:animation_timer > 0 and animation_timer  < 17
		Score_is_valid: score >= 0
end
