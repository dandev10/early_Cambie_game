#include "game.h"
#include "mainmenu.h"

#define print printf

void game(char yn[2]) {
    gameloop = 1;
//game
    while(gameloop) {

        print("%s: ", demoplayer.playersname);
        fgets(demoplayer.choose, 20, stdin);
        demoplayer.choose[strlen(demoplayer.choose)-1] = '\0';

        /*game commands*/
        // ends game
        if (strcmp(demoplayer.choose, "/quit") == 0) {
            gameloop = 0;
        }
        else if (strcmp(demoplayer.choose, "/menu") == 0) {
            gameloop = 0;
            menuloop = 1;
        }

        // help
        else if (strcmp(demoplayer.choose, "/help") == 0) {
            print("list of commands:\n");
            print("1. /help. -> gives you list of commands\n");
            print("2. /quit  -> ends game completely\n");
            print("3. /stats -> gives the players stats\n");
        }

        // players stats
        else if (strcmp(demoplayer.choose, "/stats") == 0) {
            print("\nHealth = %d\n", demoplayer.hearts);
        }
        /*end of game commands*/

        else if (strcmp(demoplayer.choose, "attack") == 0) {
            print("you have attacked -\n");
        }


        else {
            print("not a vaild action\n");
        }


    } /*end of the gameloop*/

}