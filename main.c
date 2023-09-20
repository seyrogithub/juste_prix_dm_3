#include <stdio.h>
#include <stdlib.h>
#include "time.h"

int main() {
    int rand ();
    srand(time(NULL));
    int randomNumberInRange = (rand() % 1000) + 1;
    int prix;


    while (randomNumberInRange) {
        printf("Veuillez choisir un prix compris entre 1 et 1000\n");
        scanf("%d", &prix);

        if (prix < randomNumberInRange) {
            printf("C'est plus !\n");
        }
        if (prix > randomNumberInRange){
            printf("C'est moins ! \n");
        }
        if (prix == randomNumberInRange) {
            printf("Bravo, vous avez trouve le juste prix ! \n");
            break;
        }
    }

    return 0;
}
