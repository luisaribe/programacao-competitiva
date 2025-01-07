#include <stdio.h>
#include "Lista.h"
#include "Lista.c"

int main() {
  Lista* minhaLista = criaLista();

  // Adiciona elementos
  Add(minhaLista, 10);
  Add(minhaLista, 20);
  append(minhaLista, 30);
  Insert(minhaLista, 2, 25); // Insere 25 na posição 2

  // Imprime a lista
  imprimeLista(minhaLista);

  // Remove e verifica elementos
  printf("Removendo 10: %s\n", RemoveItem(minhaLista, 10) ? "Removido" : "Nao encontrado");
  imprimeLista(minhaLista);

  // Pop e operações adicionais
  printf("Pop ultimo: %d\n", Pop(minhaLista));
  imprimeLista(minhaLista);
  printf("Pop posicao 0: %d\n", PopPos(minhaLista, 0));
  imprimeLista(minhaLista);

  // Verifica se a lista está vazia
  printf("Lista esta vazia: ");
  if (isEmpty(minhaLista)) {
    printf("Sim");
  } else {
    printf("Nao (Tamanho: %d )",minhaLista->tamanho);
  }

  return 0;
}