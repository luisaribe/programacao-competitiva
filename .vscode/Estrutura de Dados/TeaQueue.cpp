#include <stdio.h>
#include <stdlib.h>

struct nozin {
    int item;
    int chegou;
    struct nozin *prox;
};

typedef struct nozin Nodo;

typedef struct {
    int tamanho;
    Nodo *inicio;
    Nodo *fim;
} Queue;

Queue* createFila (){
    Queue* f = (Queue*) malloc(sizeof(Queue));
    f->tamanho = 0;
    f->inicio = NULL;
    f->fim = NULL;

    return f;
}

void addFila (Queue* filinha, int item, int hora){
    Nodo* novo = (Nodo*) malloc(sizeof(Nodo));

    novo->item = item;
    novo->prox = NULL;
    novo->chegou = hora;

    if(filinha->tamanho ==0){
        filinha->inicio = novo;
    }else{
        filinha->fim->prox = novo;
    }

    filinha->fim = novo;
    filinha -> tamanho++;
}

int estaVazia (Queue* fila){
    if(fila->tamanho){
        return 1;
    }else{
        return 0;
    }
}

void retirar(Queue* fila){
    Nodo* retirado = fila->inicio;
    fila->tamanho--;
    fila->inicio = retirado->prox;
    free(retirado);
}

int main (){

    int testes, alunos, chegou, paciencia;

    scanf("%d", &testes);

    while(testes--){
        scanf("%d", &alunos);

        Queue* filinha = createFila();

        for(int i=0; i<alunos; i++){
            scanf("%d %d", &chegou, &paciencia);

            addFila(filinha, paciencia, chegou);
        }

        int tempo=1;
        while(estaVazia(filinha)){
            
            int dado = filinha->inicio->item;
            int horario = filinha->inicio->chegou;

            retirar(filinha);
            
            if(tempo <= horario){
                printf("%d ", horario);
                tempo = horario +1;
            }else{ 
            if(dado>=tempo){
                printf("%d ", tempo);
                tempo++;
            }else{
                printf("0 ");
            }

            }
        }
        
        printf("\n");
    }

    return 0;
}