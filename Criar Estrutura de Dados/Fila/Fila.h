#ifndef FILA_H
#define FILA_H

struct no{
    int dado;
    struct no* prox;
};

struct filinha{
    int tamanho;
    struct no* primeiro;
    struct no* ultimo;
};

typedef struct no No;
typedef struct filinha Fila;

Fila* CriaFila();

void Enfileirar(Fila* fila, int item);

int Remove(Fila* fila); // remove e retorna item removido

int InicioFila(Fila* fila);

int EstaVazia(Fila* fila);

void ImprimeFila(Fila* fila);

#endif