#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "mainmenu.h"
#include "game.h"

// files from the "game" file
#include "../game/players/mainplayer.h"
#include "../game/players/zombie.h"


int main() {



    // Beginning stats here, because of this stupid shit
    demoplayer.hearts = 10;


    //beginning of the game
    printf("********************************\n");
    printf("Welcome to the Neon Game!\n");
    printf("********************************\n");
    printf("version 0.6\nwrite /help if stuck\n\n");
    
    sleep(1);
    printf("whats the players name: ");
    fgets(demoplayer.playersname, 50, stdin);
    demoplayer.playersname[strlen(demoplayer.playersname)-1] = '\0';
    // beginning of the game ^ 
    char yn[2];
    mainmenu(yn);


    return 0;
}

