/*ac*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){

    ll testes, cada_fila, primeira, segunda, no_pref, resto, ans;

    scanf("%lld", &testes);

    while(testes--){
        ans=0;
        resto=0;
        scanf("%lld %lld %lld %lld", &cada_fila, &primeira, &segunda, &no_pref);
        if(primeira>cada_fila){
            ans+=cada_fila;
        }else{
            ans+=primeira;
            resto=cada_fila-primeira;
        }
        if(segunda>cada_fila){
            ans+=cada_fila;
        }else{
            ans+=segunda;
            resto+=(cada_fila-segunda);
        }
        if(no_pref>resto){
            ans+=resto;
        }else{
            ans+=no_pref;
        }
        printf("%lld\n", ans);
    }

    return 0;
}