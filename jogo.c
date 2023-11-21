#include "jogo.h"
#include "time.h"

void shuffle(){
    time_t secondsfromepoch = time(NULL);
    srand(secondsfromepoch);
    printf("%d\n",secondsfromepoch);   
}
