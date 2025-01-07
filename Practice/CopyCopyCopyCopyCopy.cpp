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

    ll testes, qnt;
    
    cin >> testes;

    while(testes--){
        cin >> qnt;
        vector <ll> v(qnt);
        set <ll> arvore;

        for(ll i=0; i<qnt; i++){
            cin >> v[i];
            arvore.insert(v[i]);
        }

        cout << tam(arvore) << endl;
    }
    return 0;
}