#include <bits/stdc++.h>

using namespace std;

int main (){

    long long testes, soma=0, tam, ans;

    scanf("%lld", &testes);

    while(testes--){
        soma=0;

        scanf("%lld", &tam);
        vector<long long>v(tam);

        for(int i=0; i<tam; i++){
            scanf("%lld", &v[i]);
            soma+=v[i];
        }

        if(soma < tam){
            ans = (tam-soma)*soma;
        }else{
            if(soma%tam == 0){
                ans = 0;
            }else{
                long long resto = soma%tam;
                ans = resto * (tam - resto);
            }
        }
        printf("%lld\n", ans);
    }

    return 0;
}