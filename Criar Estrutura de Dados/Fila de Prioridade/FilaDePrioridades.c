#include <stdio.h>
#include <stdlib.h>
#include "FilaDePrioridades.h"
#include "../Fila/Fila.h"
#include "../Fila/Fila.c"

FilaPrioridades* CriaFilaPrioridades(){
    FilaPrioridades* nova = (FilaPrioridades*) malloc (sizeof(FilaPrioridades));

    Fila* fila1 = CriaFila();
    Fila* fila2 = CriaFila();
    Fila* fila3 = CriaFila();

    nova->filaMais80 = fila1;
    nova->filaMais60 = fila2;
    nova->filaJovens = fila3;
    nova->tamanho = 0;

    return nova;
}


void addPessoa(FilaPrioridades* filaP, int idade){
  if(idade < 60){
      Enfileirar(filaP->filaJovens, idade);
  }
  else if(idade < 80){
      Enfileirar(filaP->filaMais60, idade);
  }
  else{
      Enfileirar(filaP->filaMais80, idade);
  }
  filaP->tamanho++;
}

int removePessoa(FilaPrioridades* filaP){
  if(!EstaVazia(filaP->filaMais80)){
      filaP->tamanho--;
      return Remove(filaP->filaMais80);
  }

    if(!EstaVazia(filaP->filaMais60)){
        filaP->tamanho--;
        return Remove(filaP->filaMais60);
    }

    if(!EstaVazia(filaP->filaJovens)){
        filaP->tamanho--;
        return Remove(filaP->filaJovens);
    }

}

void imprimeFilaPrioridades(FilaPrioridades* filaP){

    printf("Fila de Prioridades - Tamanho: %d\n", filaP->tamanho);
    ImprimeFila(filaP->filaMais80);
    printf("---\n");
    ImprimeFila(filaP->filaMais60);
    printf("---\n");
    ImprimeFila(filaP->filaJovens);
    printf("\n\n");
}