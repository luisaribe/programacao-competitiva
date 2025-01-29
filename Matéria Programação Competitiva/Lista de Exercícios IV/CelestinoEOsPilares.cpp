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

vll ans;

vll montarVetor(int n) {
    vll vetor(n);
    for (ll i=0; i<n; i++) {
        /*
        ll a;
        a = (i ^ (i >> 1));
        if(a <n)
        */
        vetor[i] = i ^ ((i >> 1)-1); 
    }
    /*
    for (ll i=1; i<n; i+=2) {
        ll a;
        a= (i ^ (i >> 1) );
        if(a <n)
        vetor[i] = i ^ (i >> 1); 
    }
    */
    return vetor;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, n;
    cin >> testes; 
    
    while (testes--) {

        cin >> n;
        ans = montarVetor(n);
        
        for (ll i =0; i<n; i++) {
            cout << ans[i] << " ";
        }
    }

    return 0;
}