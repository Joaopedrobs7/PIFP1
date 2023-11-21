#include "estruturas.h"


void inithead(listreference** head){
    (*head) = malloc(sizeof(listreference));
    (*head)->first = NULL;
}

void insert(listreference** head,historico p){
    struct people* aux;
    aux = malloc(sizeof(historico));

    if(((*head)->first) ==  NULL){
        (*head)->first = aux;
    }

    else{
        historico* curr = (*head)->first;
        while(curr!=NULL){
            curr = curr->next;
        }
        curr = aux;
    }
    free(aux);
}
