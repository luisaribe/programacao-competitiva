#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int *habilidades, n_corredores, menor=0;

    scanf("%d", &n_corredores);
    habilidades = (int*) malloc(sizeof(int)*n_corredores);

    for(int i = 0; i < n_corredores; i++){
        scanf("%d", &habilidades[i]);
    }

    for(int i = 0; i < n_corredores; i++){
        for(int j = i+1; j < n_corredores; j++){
            if(i==0 && j==1){
                menor = abs(habilidades[i] - habilidades[j]);
            }else{
                if(abs(habilidades[i] - habilidades[j]) < menor){
                    menor = abs(habilidades[i] - habilidades[j]);
                }
            }
        }
    }

    printf("%d\n", menor);

    free(habilidades);
    return 0;
}