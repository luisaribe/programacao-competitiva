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

    ll n, m, c, etapas;
    
    cin >> n >> m >> c;
    vector <ll> mensagem( n+2, 0);
    vector <ll> chave(m+2, 0);
    vector <ll> soma(n+2, 0);
    vector <ll> psum(n+2, 0);

    etapas=n-m+1;

    for(ll i=1; i<=n; i++){
        cin >> mensagem[i];
    }

    for(ll i=1; i<=m; i++){
        cin >> chave[i];
        soma[i]+=chave[i];
        if(i+etapas<=n+2){
            soma[i+etapas]-=chave[i];
        }
    }

    for(ll i=1; i<=n; i++){
        psum[i]=psum[i-1]+soma[i];
        cout << (psum[i]+mensagem[i])%c << " ";
    }
    
    return 0;
}