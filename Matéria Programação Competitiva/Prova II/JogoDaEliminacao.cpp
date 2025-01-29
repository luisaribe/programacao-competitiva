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

    ll n, k, atual, andar;
    queue <ll> fila;

    cin >> k >> n;
    vll a(n);

    for(ll i=0; i<n; i++){
        cin >> a[i];
    }

    for(ll i=1; i<=k; i++){
        fila.push(i);
    }

    for(ll i=0; i<n; i++){
            andar = a[i]% tam(fila);
        
        for(ll j =0; j<andar;j++){

            atual = fila.front();
            fila.pop();
            fila.push(atual);
        }
        cout << fila.front() << " ";
        fila.pop();
    }

    return 0;
}