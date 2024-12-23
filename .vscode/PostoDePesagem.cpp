#include <bits/stdc++.h>

using namespace std;

int main (){

    long long quantia, valor, limite, aux, tempo =0, item;
    queue <long long> fila;

    scanf("%lld %lld %lld", &quantia, &valor, &limite);

    for(int i=0; i<quantia; i++){
        scanf("%lld", &aux);
        fila.push(aux);
    }

    while(!fila.empty()){
        item = fila.front();
        fila.pop();

        if(item > limite){
            fila.push(item-2);
            tempo+=10;
        }else{
            tempo+=5;
        }

        for(int i=0; i<valor-1; i++){
            if(fila.empty()){
                break;
            }
            fila.pop();
            tempo++;
        }
    }

    printf("%lld\n", tempo);

    return 0;
}