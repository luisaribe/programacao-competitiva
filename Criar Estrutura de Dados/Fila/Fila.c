#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

Fila* CriaFila(){
    Fila* nova = (Fila*) malloc (sizeof(Fila));
    nova->tamanho=0;
    nova->primeiro = NULL;
    nova->ultimo = NULL;

    return nova;
}

void Enfileirar(Fila* fila, int item){
    No* novo =  (No*) malloc (sizeof(No));

    novo->dado = item;
    novo->prox = NULL;

    if(fila->tamanho == 0){
        fila->primeiro=novo;
    }else{
        fila->ultimo->prox=novo;
    }

    fila->ultimo=novo;
    fila->tamanho++;
}

int Remove(Fila* fila){
    if(fila->primeiro == NULL) return 0;

    No* atual = fila->primeiro;
    int ans = atual->dado;
    fila->primeiro = atual->prox;
    free(atual);
    fila->tamanho--;

    return ans;
}

int InicioFila(Fila* fila){
    if(fila->primeiro == NULL) return -1;
        return fila->primeiro->dado;
}

int EstaVazia(Fila* fila){
    if(fila->tamanho == 0) return 1;
        return 0;
}

void ImprimeFila(Fila* fila){
    No* atual = fila->primeiro;
    while(atual != NULL){
        printf("%d ", atual->dado);
        atual = atual->prox;
    }
    printf("\n");
}
