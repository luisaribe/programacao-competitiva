/*nao terminei*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){

    ll tam_a, tam_b, consultas, soma_total=0;

    scanf("%lld %lld %lld", &tam_a, &tam_b, &consultas);
    vector <ll> a (tam_a);
    vector <ll> b (tam_b);
    vector <vector<ll>> grid (tam_b);
    vector <ll> sominhas (tam_a *tam_b);
    ll grid[100001][100001];

    for(int i=0; i<tam_a+tam_b; i++){
        if(i<tam_b){
            scanf("%lld", &a[i]);

        }else{
            scanf("%lld", &b[i-tam_a]);
        }
    }

    for(int i=0; i<tam_a; i++){
        for(int j=0; j<tam_b; j++){
            grid[i][j]= a[i]*b[j];
            soma_total+=grid[i][j];
            
        }
    }


    return 0;
}