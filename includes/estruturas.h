#ifndef  FILE_H
#define  FILE_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

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
    void insert(listreference** head,struct historico p);

#endif  /*FILE_H*/