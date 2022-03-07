#include <stdio.h>
#include <string.h>

void schritte();

extern int i;
extern char wand[5];

void antwort () {
    if (strcmp(wand, "ja") == 0 || strcmp(wand, "Ja") == 0) {
        i++;
        printf("Drehung\n");
    } else if (strcmp(wand, "nein") == 0 || strcmp(wand, "Nein") == 0) {
        schritte();
    } else {
        printf("Ungueltige Eingabe!\n");
    };
  
};

