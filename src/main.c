
#include "includes/estruturas.h"
#include "includes/jogo.h"


int main(){
    listreference* head = NULL;
    inithead(&head);
    player jogador;
    dado player;
    dado banker;
    char winner[10];
    create_player(&jogador);
    
    
    while(1){
        bet(&jogador);
        saldo(jogador);
    
        //girando os dados
        player = shuffle(player);
        banker = shuffle(banker);
        // player.dado1 = 5;
        // player.dado2 = 5;
        // banker.dado1 = 6;
        // banker.dado2 = 6;
    
        match(&jogador,player,banker,winner); 
        printf("Vencedor = %s\n",winner);
        insert(&head,winner);
        printlist(&head);
        saldo(jogador);    
    }
    
    

    
   
    

    return 0;
}

