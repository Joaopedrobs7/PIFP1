#include "jogo.h"
#include "time.h"

int shuffle(){
    printf("Girando o dado..");
    sleep(5);
    srand(time(NULL));
    int number = rand()%6 +1;
    return number;
}
