#include <bits/stdc++.h>

using namespace std;

int main (){

    int testes, tam, elem, chegada, saida;
    queue <pair<int, int>> fila;

    scanf("%d", &testes);

    while(testes--){

        scanf("%d", &tam);
        vector <int> primeiro(tam);
        vector <pair<int, int>> segundo;

        for(int i=0; i<2 *tam; i++){

            if(i < tam){ 
            scanf("%d", &primeiro[i]);
            }else{ 
            scanf("%d", &elem);
            fila.push(make_pair(primeiro[i-(tam)], elem));
            }
        }

        int timeline=0;
        while(!fila.empty()){

            tie(chegada, saida) = fila.front();
            fila.pop();

            if(timeline <= chegada){
                timeline = saida;
                printf("%d ", saida-chegada);
            }else{
                printf("%d ", saida-timeline);
                timeline = saida;
            }
        }
        printf("\n");

    }

    return 0;
}