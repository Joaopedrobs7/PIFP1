#include "includes/jogo.h"
#include <time.h>
#include "includes/estruturas.h"


void create_player(player* player){
    printf("Conta criada com sucesso.\n Voce recebeu R$ 100\n");
    player->money = 100;
}

void depositar(player* jogador){
    int fichas;
    printf("Deseja Comprar quantas fichas?\n");
    scanf("%d",&fichas);
    jogador->money += fichas*50;
}
void bet(player* jogador){
    if(jogador->money < 50){
        printf("Saldo insuficiente\n");
        printf("1)Depositar\n2)Sair do jogo\n");
        int choice_deposit;
        scanf("%d",&choice_deposit);
        if(choice_deposit == 1){
            depositar(jogador);
            printf("1)PLAYER\t2)TIE\t3)BANKER\n");
            int choice_bet;
            puts("aposta:");
            scanf("%d",&choice_bet);
            jogador->money -= 50;
            jogador->choice = choice_bet;
        }
        else{
            exit(1);
        }
    }
    else{
        printf("1)PLAYER\t2)TIE\t3)BANKER\n");
        int choice_bet;
        puts("aposta:");
        scanf("%d",&choice_bet);
        jogador->money -= 50;
        jogador->choice = choice_bet;
    }
    
}
void match(player* jogador,dado player,dado banker,char* winner){
    int sum_player = player.dado1 + player.dado2;
    int sum_banker = banker.dado1 + banker.dado2;
    int winner_id = 0;
    if(sum_player > sum_banker){
        strcpy(winner,"Player");
        winner_id = 1;
    }
    else if (sum_player<sum_banker){
        strcpy(winner,"Banker");
        winner_id = 3;
    }
    else if (sum_player == sum_banker){
        strcpy(winner,"Tie");
        winner_id = 2;
        
    }
    
    if(jogador->choice == winner_id){
        if(winner_id == 2){
            jogador->money += 50*5;
        }
        else{
            jogador->money += 50*2;
        }
    }
    else if((strcmp(winner,"Tie") == 0) && jogador->choice!= 2){
        jogador->money += 50*0.9;
    }

}

void saldo(player player){
    printf("Saldo atual = R$%.2f\n",player.money);
}

dado shuffle(dado dado){
    srand(time(NULL));
    printf("Girando o primeiro dado..\n");
    sleep(5);
    int number = rand()%6 +1;
    dado.dado1 = number;
    printf("Primeiro numero = %d\n",number);
    
    printf("Girando o Segundo dado..\n");
    sleep(5);
    int number2 = rand()%6 +1;
    printf("Segundo Numero = %d\n",number2);
    dado.dado2 = number2;
    
return dado;
}

