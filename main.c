#include <stdio.h>

void antwort();

int i = 0; // Drehungen
int s = 0; // Schritte
char wand[5]; // Antwort

void main () {

    while (i<4) {
        printf ("Ist hier eine Wand? Antworte mit ja oder nein!\n");
        scanf ("%s", wand);
        antwort();
        
    };
    if (i == 4) {
        printf ("Du hast den Raum einmal umrundet.\n");
        printf ("Du bist %d Schritte gegangen.", s);
    };
};

