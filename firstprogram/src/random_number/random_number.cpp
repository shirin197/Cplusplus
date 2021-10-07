//
// Created by Nadina Amsler (shirin197)  on 31.08.2021.
// main topic -> rand function ::
//

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

/*
 * v1 = rand() % 100;         // v1 in the range 0 to 99
 * v2 = rand() % 100 + 1;     // v2 in the range 1 to 100
 * v3 = rand() % 30 + 1985;   // v3 in the range 1985-2014
 * */

int main(){
    int iSecret, iGuess;

    // Zufallsgenerator initialisieren
    srand(time(NULL));

    // geheime Nummer genereieren zwischen 0 und 100
    iSecret = rand() %100 + 1;
    do{
        printf("Finde die Zahl zwischen 0 und 100 heraus: ");
        scanf_s("%id",&iGuess);

        if (iSecret<iGuess) puts ("Die geheime Zahl ist kleiner");
        else if (iSecret>iGuess) puts ("Die geheime Zahl ist groesser ");
    }while (iSecret!=iGuess);

    puts("Gratuliere du hast die gesuchte Zahl gefunden");
    return -1;
}