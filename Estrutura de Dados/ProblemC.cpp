/*
Problem C div.3 

22/12/24

não resolvi :/
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, prova, listas, sabe, aux;
    bool pass = true;

    cin >> testes;

    while(testes--){
        cin >> prova >> listas >> sabe;
        vector <ll> l(listas);
        vector <ll> s(sabe);

        for(ll i=0; i<(listas+sabe); i++){
            cin >> aux;
            if(i<listas){
                l[i] = aux;
            }else{
                s[i] = aux;
            }
        }

        for(ll i=0; i<sabe; i++){
            if()
        }
    }
    
    return 0;
}