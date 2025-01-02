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

    ll testes, n, menor, ans, aux;

    cin >> testes;

    while(testes--){

        cin >> n;
        vector <ll> v(n);
        ans=0;

        for(ll i=0; i<n; i++){
            cin >> aux;
            v[i] = aux;
            if(i == 0){
                menor = aux;
            }else{
                if(aux < menor){
                    menor = aux;
                }
            }
        }

        for(ll i=0; i<n; i++){
            ans+=(v[i]-menor);
        }

        cout << ans << endl;
    }
    return 0;
}