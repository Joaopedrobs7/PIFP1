#include "includes/jogo.h"
#include <time.h>
#include "includes/estruturas.h"

    

void shuffle(dado dado){
    srand(time(NULL));
    printf("Girando o primeiro dado..\n");
    sleep(5);
    int number = rand()%6 +1;
    dado.dado1 = number;
    
    printf("Girando o Segundo dado..\n");
    sleep(5);
    int number2 = rand()%6 +1;
    dado.dado2 = number;
    

}
