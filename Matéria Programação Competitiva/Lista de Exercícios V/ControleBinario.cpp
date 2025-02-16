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


ll buscaLargura(ll origem, ll destino, vector<bool> foi){
    ll atual,cliques;
    queue<pll> fila;
    
    fila.push({origem,0});
    foi[origem] = true;
    
    while(!fila.empty()){

        tie(atual, cliques) = fila.front();
        fila.pop();
        
        if(atual == destino) return cliques;
    
        if(atual*2 <= 100000 && foi[atual*2] == false){
            foi[atual*2] = true;
            fila.push({atual*2, cliques+1});
        }
        
        if(atual-1 > 0 && foi[atual-1] == false){
            foi[atual-1] = true;
            fila.push({atual - 1, cliques+1});
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m;

    cin >> n >> m;

    vector<bool> flag(100001,false);

    cout << buscaLargura(n, m,flag) << endl;

    return 0;
}