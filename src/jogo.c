#include "includes/jogo.h"
#include <time.h>
#include "includes/estruturas.h"

    
void startgame(player player){
    printf("Conta criad com sucesso.\n Voce recebeu R$ 100\n");
    player.money = 100;
}

void bet(player player){
    printf("1)PLAYER\t2)TIE\t3)BANKER");
    int choice;
    scanf("%d",&choice);
    player.money -= 50;
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

