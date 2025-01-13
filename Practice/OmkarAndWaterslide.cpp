/*
nao resolvido
*/

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define tam(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, qnt, ans, aux, anterior, n;

    cin >> testes;

    while(testes--){
        cin >> qnt;
        ans=0, anterior = -1;
        stack <ll> pilha;

        for(ll i=0; i<qnt; i++){
            cin >> aux;
            if(pilha.empty()){
                pilha.push(aux);
            }else{
                while(!pilha.empty() && aux > pilha.top()){
                    n= pilha.top();
                    pilha.pop();
                    if(pilha.empty()) break;
                    ans+=(pilha.top()-n);
                }
            }
        }
    }

    return 0;
}