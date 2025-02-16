#include <stdio.h>
#include <stdlib.h>

//Definicao do tipo Grafo
struct grafo{
    int eh_ponderado;
    int nro_vertices;
    int grau_max; //tamanho das listas
    int** arestas; //matriz de arestas
    float** pesos;
    int* grau; //quantidade de elemenos em cada lista
};

typedef struct grafo Grafo;

Grafo* cria_Grafo(int nro_vertices, int grau_max, int eh_ponderado){
    Grafo *gr;
    gr = (Grafo*) malloc(sizeof(struct grafo));
    if(gr != NULL){
        int i;
        gr->nro_vertices = nro_vertices;
        gr->grau_max = grau_max;
        gr->eh_ponderado = (eh_ponderado != 0)?1:0;
        gr->grau = (int*) calloc(nro_vertices,sizeof(int));

        gr->arestas = (int**) malloc(nro_vertices * sizeof(int*));
        for(i=0; i<nro_vertices; i++)
            gr->arestas[i] = (int*) malloc(grau_max * sizeof(int));

        if(gr->eh_ponderado){
            gr->pesos = (float**) malloc(nro_vertices * sizeof(float*));
            for(i=0; i<nro_vertices; i++)
                gr->pesos[i] = (float*) malloc(grau_max * sizeof(float));
        }

    }
    return gr;
}

void libera_Grafo(Grafo* gr){
    if(gr != NULL){
        int i;
        for(i=0; i<gr->nro_vertices; i++)
            free(gr->arestas[i]);
        free(gr->arestas);

        if(gr->eh_ponderado){
            for(i=0; i<gr->nro_vertices; i++)
                free(gr->pesos[i]);
            free(gr->pesos);
        }
        free(gr->grau);
        free(gr);
    }
}

int insereAresta(Grafo* gr, int orig, int dest, int eh_digrafo, float peso){
    if(gr == NULL)
        return 0;
    if(orig < 0 || orig >= gr->nro_vertices) //verifica se vertice existe
        return 0;
    if(dest < 0 || dest >= gr->nro_vertices) 
        return 0;

    gr->arestas[orig][gr->grau[orig]] = dest; 
    if(gr->eh_ponderado)
        gr->pesos[orig][gr->grau[orig]] = peso; 
    gr->grau[orig]++;

    if(eh_digrafo == 0)
        insereAresta(gr,dest,orig,0,peso); 
    return 1;
}

int buscaProfundidade(Grafo *gr, int ini, int *visitado, int cont){
    int i;
    visitado[ini] = cont; 
     for (i = 0; i < gr->grau[ini]; i++) {
        if (!visitado[gr->arestas[ini][i]]) {
            if (buscaProfundidade(gr, gr->arestas[ini][i], visitado, cont + 1)) {
                return 1; 
            }
        } else {
            if (cont - visitado[gr->arestas[ini][i]] == 2) {
                return 1; 
            }
        }
    }
    return 0;
}

int main(){
    int t;

    scanf("%d", &t);
   
    int *avioes = (int*) malloc(t * sizeof(int));
    int* visitados = (int*)malloc(t * sizeof(int));

    Grafo* garfo = cria_Grafo( t, 2, 0);

    for(int i=0; i<t; i++){
        scanf("%d", &avioes[i]);
        insereAresta(garfo, i, avioes[i]-1, 1, 0); 
    }

    int ciclo =0;
    for(int i=0; i<t; i++){
        for (int j = 0; j < t; j++) {
            visitados[j] = 0; 
        }
        if (buscaProfundidade(garfo, i, visitados, 1)) {
            ciclo = 1;
            break;
        }
    }

    if (ciclo) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    libera_Grafo(garfo);
    free(avioes);
    free(visitados);
    return 0;
}