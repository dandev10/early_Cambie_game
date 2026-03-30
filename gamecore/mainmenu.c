#include "mainmenu.h"
#include "game.h"

// info about the game
#define print printf
void info() {
    float version = 0.61;
    print("Version: %.2f\n", version);
    print("Creator: dandev10\n");
    print("editon: Standard(draft)\n");
    print("Additonal help: Nikeedev\n");
    print("\n");
}

void mainmenu(char yn[2]) {

    menuloop = 1;
    while(menuloop) {
        printf("menu:");
        fgets(menuplayer.choose, 20, stdin);
        menuplayer.choose[strlen(menuplayer.choose)-1] = '\0';

        if (strcmp(menuplayer.choose, "start") ==0 ) {
            menuloop = 0;
            game(yn);
        }
        else if (strcmp(menuplayer.choose, "quit") == 0) {
            menuloop = 0;
        }

        else if (strcmp(menuplayer.choose, "info") == 0) {
            info();
        }
    }

}