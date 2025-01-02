#ifndef LISTA_H 
#define LISTA_H 

struct no {
    int dado;
    struct no *prox;
};

struct list {
    int tamanho;
    struct no *inicio;
};

typedef struct no No;
typedef struct list Lista;

//cria uma lista vazia
Lista *criaLista();

//adiciona um item no inicio da lista
void Add(Lista *lista, int item);

//procura um item na lista
int search(Lista *lista, int item);

//verifica se a lista esta vazia
int isEmpty(Lista *lista);

//add no final da lista
void append(Lista *lista, int item);

//remove primeiro no com valor especificado
int RemoveItem(Lista *lista, int item);

//retorna a posição de um item
int Index(Lista *lista, int item);

//insere um item em uma posição especifica
int Insert(Lista *lista, int id, int item);

//remove e retorna ultimo item da lista
int Pop(Lista *lista);

//remove e retorna item em posição especifica
int PopPos(Lista *lista, int id);

//imprime todos os elementos da lista
void imprimeLista(Lista *lista);

#endif