#include <bits/stdc++.h>

using namespace std;

int main (){

    int time1, time2, letra=0;
    queue <int> fila;

    for(int i=0; i<15; i++){
        if(i<8){
            scanf("%d %d", &time1, &time2);
            if(time1 > time2){
                fila.push('A'+ letra);
                letra+=2;
            }else{
                letra++;
                fila.push('A' + letra);
                letra++;
            }
        }else{
                scanf("%d %d", &time1, &time2);
                if(time1>time2){
                    letra = fila.front();
                    fila.pop();
                    fila.pop();
                    fila.push(letra);
                }else{
                    fila.pop();
                    letra = fila.front();
                    fila.pop();
                    fila.push(letra);
                }
            }
        }
    
    printf("%c\n", letra);

    return 0;
}