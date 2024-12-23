#include <bits/stdc++.h>

using namespace std;

int main (){

    long long testes, soma, menor, i, n;

    scanf("%lld", &testes);

    while(testes--){
        menor=1; i=1; n=1;

        scanf("%lld", &soma);

        while(n < soma){
            i++;
            menor+=2;
            n+=menor;
        }

        if(soma == 1){ 
        i=1;
        }

        printf("%lld\n", i);
    }

    return 0;
}