#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    stack <ll> num;
    ll testes, aux, soma=0;

    cin >> testes;

    while(testes--){
        cin >> aux;
        if(aux == 0){
            if(!num.empty()){
                num.pop();
            }
        }else{
            num.push(aux);
        }

    }

    while(!num.empty()){
            soma+=num.top();
            num.pop();
        }
    cout << soma << "\n";

    return 0;
}