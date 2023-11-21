
#include "includes/estruturas.h"
#include "includes/jogo.h"


int main(){
    //listreference* head;
    //inithead(&head);
    player jogador;
    dado player;
    dado banker;
    startgame(jogador);

    
    player = shuffle(player);
    banker = shuffle(banker);
    
    
    printf("PLAYER:\nDado 1 = %d\nDado 2 = %d\nBanker:\nDado 1 = %d\nDado 2 = %d",player.dado1,player.dado2,banker.dado1,banker.dado2);
   
    
   
    

    return 0;
}

