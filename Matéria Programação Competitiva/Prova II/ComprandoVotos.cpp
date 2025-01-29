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

    ll n, v, aux, maior;
    priority_queue<ll> fila;
    
    cin >> n;
    
    for(ll i=0; i<n; i++){
        if(i==0){
            cin >> v;
        }else{
            cin >> aux;
            fila.push(aux);
        }
    }

    ll ans = v;

    while(!fila.empty() && ans <= fila.top()){
        maior = fila.top();
        fila.pop();
        maior--;
        ans++;
        fila.push(maior);
    }

    cout << ans-v << endl;

    return 0;
}