#ifndef FILAPRIORIDADES_H
#define FILAPRIORIDADES_H

#include "../Fila/Fila.h"

struct prioridade {
    Fila* filaMais80;
    Fila* filaMais60;
    Fila* filaJovens;
    int tamanho; 
};

typedef struct prioridade FilaPrioridades;

FilaPrioridades* CriaFilaPrioridades();

void addPessoa(FilaPrioridades* filaP, int idade);

int removePessoa(FilaPrioridades* filaP);

void imprimeFilaPrioridades(FilaPrioridades* filaP);

#endif