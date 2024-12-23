#ifndef PILHA_H
#define PILHA_H

struct Nozin {
    int dado;
    struct Nozin *prox;
};

struct Pilha {
    struct Nozin *inicio;
    int tamanho;
};

typedef struct Nozin no;
typedef struct Pilha stack;

stack* criaPilha();

void Empilhar(stack *pilha, int item);

void Desempilhar(stack *pilha);

int RetornaTopo(stack *pilha);

int EstaVazia(stack *pilha);

int Tamanho(stack *pilha);

#endif // PILHA_H