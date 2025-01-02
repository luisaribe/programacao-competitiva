#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

Lista* criaLista(){
    Lista *lista = (Lista*) malloc (sizeof(Lista));
    lista->inicio = NULL;
    lista->tamanho = 0;
    return lista;
}

void Add(Lista *lista, int item){
    No *novo = (No*) malloc (sizeof(No));

    novo->dado = item;
    novo->prox = lista->inicio;

    lista->tamanho++;
    lista->inicio = novo;
}

int search(Lista *lista, int item){
    No *atual = Lista->inicio;

    while(atual != NULL){
        if(atual -> dado == item) return 1;
        atual = atual->prox;
    }
    return 0;
}

int isEmpty(Lista *lista){
    if(lista->tamanho == 0){
        return 1;
    }else{
        return 0;
    }
}

void append(Lista *lista, int item){
    No *novo = (*No) malloc (sizeof(No));

    novo->dado = item;
    novo->prox = NULL;

    if(lista->tamanho == 0){
        lista->inicio = novo;
    }else{
        No *atual = Lista->inicio;
        while(atual->prox != NULL){
            atual=atual->prox;
        }
        atual->prox = novo;
    }

    lista->tamanho++;
}

int RemoveItem(Lista *lista, int item){
    if(lista->inicio == NULL) return 0;
    No *atual = lista->inicio;
    No *anterior = NULL;

    while(atual!=NULL){
        if(atual->dado == item){
            if(anterior == NULL){
                lista->inicio=atual->prox;
            }else{
                anterior->prox=atual->prox;
            }
            free(atual);
            lista->tamanho--;
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }

    return 0;
}

int Index(Lista *lista, int item){
    int id=0;
    No *atual = lista->inicio;
    while(atual != NULL){
        if(atual->dado == item){
            return id;
        }else{
            atual = atual->prox;
        }
        id++;
    }
    return -1;
}

int Insert(Lista *lista, int id, int item){
    if(id<=lista->tamanho && id>=0){
    No *novo = (No*) malloc (sizeof(No));
    novo->dado = item;
    lista->tamanho++;
    No *atual = lista->inicio;
    No *anterior = NULL;
    int count = 0;
        while(count < id){
            anterior = atual;
            atual = atual->prox;
            count++;
        }
        if(id>0){ 
        anterior->prox = novo;
        }else{
            lista->inicio=novo;
        }
        novo->prox = atual;
        return 1;
    }else{
        return 0;
    }
}

int Pop(Lista *lista){
    if(lista->inicio == NULL) return -1;

    No *atual = lista->inicio;
    if(tamanho == 1){
        lista->inicio = NULL
    }else{ 
        while(atual->prox->prox != NULL){
            atual = atual->prox;
        }
    }
    int valor = atual->prox->dado;
    free(atual->prox);
    lista->tamanho--;
    atual->prox = NULL;
    return valor;
}

int PopPos(Lista *lista, int id){
    if(lista ->inicio == NULL || id > lista->tamanho) return -1;
    No *atual = lista->inicio;
    No *anterior = NULL;

    if(id == 0){
        lista->inicio = lista->inicio->prox;
    }else{
        int count =0;
        while(count<id){
            anterior = atual;
            atual=atual->prox;
            count++;
        }
        anterior->prox = atual->prox;
    }
    int valor = atual->dado;
    lista->tamanho--;
}

void imprimeLista(Lista *lista){
    if(lista->tamanho > 0){
        No *atual = lista->inicio;
        while(atual != NULL){
            printf("%d ", atual->dado);
            atual = atual ->prox;
        }
    }
}