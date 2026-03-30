all: 
# makefile runs the gamecore and the game folder. it uses all .c files
	clear
	gcc gamecore/main.c gamecore/game.c gamecore/mainmenu.c game/players/mainplayer.c game/world/place.c -o main 
	./main