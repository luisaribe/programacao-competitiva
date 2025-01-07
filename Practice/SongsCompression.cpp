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

    ll testes, maior, soma=0, ans=0, n, m;
    priority_queue <ll, vll, greater<>> fila;

    cin >> testes >> maior;

    for(ll i=0; i<testes; i++){
        cin >> n >> m;
        fila.push(m - n);
        soma+=n;
    }

    if(soma > maior){ 
        while(!fila.empty()){
            soma+=(fila.top());
            fila.pop();
            ans++;
            if(soma <= maior) break;
        }
    }

    if(fila.empty() && soma > maior) ans = -1;

    cout << ans << endl;

    return 0;
}