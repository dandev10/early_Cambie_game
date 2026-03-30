#pragma once

#include <stdio.h>
#include <string.h>
#include <unistd.h>

struct place {
    char name[20];
    char description[100];

    struct place *land;
    struct place *city[10];
    
};
// Land kingdom
struct place landkingdom, greatcity;
void landkingdomf();