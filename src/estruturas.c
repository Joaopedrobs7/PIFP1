#include "includes/estruturas.h"


void inithead(listreference** head){
    (*head) = malloc(sizeof(listreference));
    (*head)->first = NULL;
}

void insert(listreference** head,char* winner){
    struct historico* aux;
    aux = malloc(sizeof(historico));
    strcpy(aux->cor,winner);
    aux->next = NULL;

    if(((*head)->first) ==  NULL){
        (*head)->first = aux;
        
    }

    else{
        historico* curr = (*head)->first;
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr->next = aux;
    }
    
}
void printlist(listreference** head){
    historico* aux = (*head)->first;
    puts("\n\nULTIMAS RODADAS ");
    puts("==================================");
    while(aux!=NULL){
        
        printf("%s\t",aux->cor);
        aux = aux->next;
    }
    printf("\n");
    puts("==================================");
}