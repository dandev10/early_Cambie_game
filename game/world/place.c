#include "place.h"

void landkingdomf() {
    strcpy(landkingdom.name, "Land Kingdom");
    landkingdom.land = NULL;
    landkingdom.city[0] = &greatcity;

    strcpy(greatcity.name, "Great city");
    greatcity.land = &landkingdom;

}