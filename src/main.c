
#include "includes/estruturas.h"
#include "includes/jogo.h"


int main(){
    //listreference* head;
    //inithead(&head);
    player jogador;
    dado player;
    dado banker;
    
    create_player(&jogador);
    saldo(jogador);
    
    bet(&jogador);
    saldo(jogador);
    
    player = shuffle(player);
    banker = shuffle(banker);

    match(&jogador,player,banker);
    saldo(jogador);
    
    

    
   
    

    return 0;
}

