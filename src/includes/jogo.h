#ifndef  FILE_A
#define  FILE_A

    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    #include <unistd.h>
    #include "estruturas.h"
    

    dado shuffle(dado dado);
    void create_player(player* player);
    void bet(player* player);
    void saldo(player player);
    void match(player* jogador,dado player,dado banker,char* winner);
    void depositar(player* jogador);
#endif  /*FILE_A*/