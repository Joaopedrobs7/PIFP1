#ifndef  FILE_H
#define  FILE_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

typedef struct player{
    float money;
    int choice;
}player;

typedef struct dado{
    int dado1;
    int dado2;
}dado;

typedef struct historico{
    char cor[20];
    struct historico* next;
}historico;

typedef struct listreference{
    struct historico* first;
}listreference;

    
    void inithead(listreference** head);
    void insert(listreference** head,char* winner);
    void printlist(listreference** head);

#endif  /*FILE_H*/