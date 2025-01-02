#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

stack* criaPilha(){
    stack* pilha = (stack*)malloc(sizeof(stack));
    pilha -> inicio = NULL;
    pilha -> tamanho = 0;
    return pilha;
}

void Empilhar(stack *pilha, int item){
    no* novo = (no*)malloc(sizeof(no));
    novo -> dado = item;

    if(pilha->tamanho == 0){
        novo->prox = NULL;
    }else{
        novo->prox = pilha->inicio;
    }

    pilha->inicio = novo;
    pilha->tamanho++;
}

void Desempilhar(stack *pilha){
    no* atual = pilha -> inicio;
    no* segundo = pilha->inicio->prox;

    pilha->inicio = segundo;
    pilha->tamanho--;
    free(atual);
}

int RetornaTopo(stack *pilha){
    return pilha->inicio->dado;
}

int EstaVazia(stack *pilha){
    if(pilha->tamanho==0)
        return 1;
    return 0;
}

int Tamanho(stack *pilha){
    return pilha->tamanho;
}

int main(){

    int dado;
    stack *pilha = criaPilha();
    Empilhar(pilha, 3);
    Empilhar(pilha, 6);
    Empilhar(pilha, 8);
    Empilhar(pilha, 9);
    dado = RetornaTopo(pilha);
    printf("%d\n", dado);
    Desempilhar(pilha);
    dado = RetornaTopo(pilha);
    printf("%d\n", dado);
    dado = EstaVazia(pilha);
    printf("A pilha esta vazia %d\n", dado);
    dado= Tamanho(pilha);
    printf("O tamanho da fila eh %d\n", dado);

    return 0;
}