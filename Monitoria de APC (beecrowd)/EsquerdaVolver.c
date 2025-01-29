#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int n, comand;
    char lado;

    scanf("%d", &n);

    while(n){
        getchar();
        comand=0;
        for(int i=0; i<n; i++){
            scanf("%c", &lado);
            if(lado == 'E'){
                comand--;
            }else{
                comand++;
            }
        }

        int x = comand % 4;
        if (x < 0) {
            x += 4; 
        }

        if(x ==0){
            printf("N\n");
        }else{
            if(x == 1){
                printf("L\n");
            }else{
                if(x==2){
                    printf("S\n");
                }else{
                    if(x == 3)
                    printf("O\n");
                }
            }
        }

       scanf("%d", &n); 
    }

    return 0;
}