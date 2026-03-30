#include "game.h"
#include "mainmenu.h"


void game(char yn[2]) {
    gameloop = 1;
    mainplayerfunc();
    landkingdomf();
    
    //game
    while(gameloop) {

        printf("%s: ", demoplayer.playersname);
        fgets(demoplayer.choose, 20, stdin);
        demoplayer.choose[strlen(demoplayer.choose)-1] = '\0';


        /***************************************************/
        /*****************game commands*********************/
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
            printf("list of commands:\n");
            printf("1. /help. -> gives you list of commands\n");
            printf("2. /quit  -> ends game completely\n");
            printf("4. /menu  -> returns to menu");
            printf("3. /stats -> gives the players stats\n");
        }

        // players stats
        else if (strcmp(demoplayer.choose, "/stats") == 0) {
            printf("\nHealth = %d\n", demoplayer.hearts);
        }
        /***************end of game commands**********************/
        /*********************************************************/

        /* * * * * * * * * * * * * IN GAME* * * * * * * * * * * */

        else if (strcmp(demoplayer.choose, "place") == 0) {
            printf("%s, %s\n", landkingdom.name, greatcity.name);
        }
        /* * * * * * * * * * END OF MAIN GAME * * * * * * * * * */

        else {
            printf("not a vaild action\n");
        }


    } /*end of the gameloop*/

}