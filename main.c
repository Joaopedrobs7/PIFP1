
#include "estruturas.h"
#include "jogo.h"


int main(){
    listreference* head;
    inithead(&head);
    dado player;
    dado banker;
    
    shuffle(player);
    shuffle(banker);
    
    
    printf("PLAYER:\nDado 1 = %d\nDado 2 = %d\nBanker:\nDado 1 = %d\nDado 2 = %d",player.dado1,player.dado2,banker.dado1,banker.dado2);
   
    
   
    

    return 0;
}

