#include "game.h"
#include "mainmenu.h"

int checkStr(char* str1, char* str2) {
    if (strcmp(str1, str2) == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

void game(char yn[2]) {
    gameloop = 1;
    mainplayerfunc();
    cords();
    
    //game
    while(gameloop) {
        printf("North:%d, West:%d\n", locate.cordsN, locate.cordsW);
        printf("%s: ", demoplayer.playersname);
        fgets(demoplayer.choose, 20, stdin);
        demoplayer.choose[strlen(demoplayer.choose)-1] = '\0';

        /***************************************************/
        /*****************game commands*********************/
        // ends game
        if (checkStr(demoplayer.choose, "quit")) {
            gameloop = 0;
        }
        else if (checkStr(demoplayer.choose, "menu")) {
            gameloop = 0;
            menuloop = 1;
        }

        // help
        else if (checkStr(demoplayer.choose, "help")) {
            printf("list of commands:\n");
            printf("1. /help. -> gives you list of commands\n");
            printf("2. /quit  -> ends game completely\n");
            printf("4. /menu  -> returns to menu(Warning! progress will not be saved)");
            printf("3. /stats -> gives the players stats\n");
        }

        // players stats
        else if (checkStr(demoplayer.choose, "stats")) {
            printf("\nHealth = %d\n", demoplayer.hearts);
            printf("XP = %d\n", demoplayer.xp);
        }
        /***************end of game commands**********************/
        /*********************************************************/

        /* * * * * * * * * * * * * IN GAME* * * * * * * * * * * */

        else if (checkStr(demoplayer.choose, "place")) {
            printf("North:%d, West:%d\n", locate.cordsN, locate.cordsW);
        }
        else if (checkStr(demoplayer.choose, "+xp")) {
            demoplayer.xp+=10;
            printf("You Gained XP!\n");
        }
        else if (checkStr(demoplayer.choose, "-xp")) {
            demoplayer.xp-=5;
            printf("You lost XP!\n");
        }

        // player moves////////////////////////////////
        else if (checkStr(demoplayer.choose, "n")) {
            locate.cordsN += 10;
            printf("you went north\n");
        }
        else if (checkStr(demoplayer.choose, "s")) {
            locate.cordsN -= 10;
            printf("you went south\n");

        }
        else if (checkStr(demoplayer.choose, "w")) {
            locate.cordsW += 10;
            printf("you went west\n");
        }
        else if (checkStr(demoplayer.choose, "e")) {
            locate.cordsW -= 10;
            printf("you went east\n");

        }
        ////////////////////////////////
    
        /* * * * * * * * * * END OF MAIN GAME * * * * * * * * * */

    } /*end of the gameloop*/

}