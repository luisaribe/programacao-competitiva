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

    ll n, atual, quantia=0, aux;
    queue <ll> fila;
    bool flag = false;

    cin >> n;

    while(1){
        for(ll i=1; i<=n; i++){
            fila.push(i);
        }
        quantia++;
        while(!fila.empty()){
            atual = fila.front();
            fila.pop();
            for(ll i=0; i<quantia-1; i++){
                if(!fila.empty()){
                    aux = fila.front();
                    fila.pop();
                    fila.push(aux);
                }
            }
            if(fila.empty() && atual == 13) flag = true;
        }
        if(flag == true) break;
    }

    cout << quantia << endl;

    return 0;
}