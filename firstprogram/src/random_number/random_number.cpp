//
// Created by Nadina Amslerm (shirin197)  on 31.08.2021.
//

#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

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
    return 0;
}