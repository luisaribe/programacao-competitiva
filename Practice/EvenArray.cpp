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

Par( ll a){
    if(a%2==0) return 1;
    return 0;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, n, moves;

    cin >> testes;

    while(testes--){
        moves=0;
        ll iimpar=0, ipar=0, numimpar=0, numpar=0;
        cin >> n;
        vector <ll> v(n);

        for(ll i=0; i<n; i++){
            cin >> v[i];
            if(Par(i) != Par(v[i])){
                if(Par(i)){
                    ipar++;
                }else{
                    iimpar++;
                }
                if(Par(v[i])){
                    numpar++;
                }else{
                    numimpar++;
                }
            }
        }

        if(ipar == numpar && iimpar == numimpar){
            cout << ipar << endl;
        }else{
            cout << "-1" << endl;
        }    
    }

    return 0;
}