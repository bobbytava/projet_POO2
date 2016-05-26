note
	description: "Représente un niveau du jeu"
	author: "Simon Gagné"
	date: "25/24/2016"

class
	LEVEL

create
	make_lvl1,
	make_lvl2,
	make_lvl3

feature
	make_lvl1
			--Constructeur du niveau 1
		local
			l_ball1:BALL
			l_ball2:BALL
		do
			create l_ball1.make(100,192,2,true)
			create l_ball2.make(600,192,2,true)
			create array_balls.make
			array_balls.extend (l_ball1)
			array_balls.extend (l_ball2)
		end

	make_lvl2
			--Constructeur du niveau 2
		local
			l_ball1:BALL
			l_ball2:BALL
		do
			create l_ball1.make (600, 200, 3, true)
			create l_ball2.make (100, 200, 2, true)
			create array_balls.make
			array_balls.extend (l_ball1)
			array_balls.extend (l_ball2)
		end

	make_lvl3
			--Constructeur du niveau 3
		local
			l_ball1:BALL
			l_ball2:BALL
			l_ball3:BALL
		do
			create l_ball1.make (600, 200, 3, true)
			create l_ball2.make (100, 200, 3, true)
			create l_ball3.make (700, 200, 3, true)
			create array_balls.make
			array_balls.extend (l_ball1)
			array_balls.extend (l_ball2)
			array_balls.extend (l_ball3)
		end

	array_balls:LINKED_LIST[BALL]
			--Représente la liste des balles de `Current'
end
