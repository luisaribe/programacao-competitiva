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

    ll testes, n, op, aux;;

    cin >> testes;

    while(testes--){
      cin >> n >> op;
      vector <ll> v(n);

      for(ll i=0; i<n; i++){
        cin >> v[i];
      }  

      sort(all(v));
      vector <ll> opera;
      aux = 0;

      for(ll i=0; i<n; i++){
        if(i==0){
            aux++;
        }else{
            if(v[i] != v[i-1]){
                opera.pb(aux);
                aux = 1;
            }else{
                aux++;
            }
        }
      }

      opera.pb(aux);

      sort(all(opera));
      ll m = 0;
      ll ans = tam(opera);

      for(ll i=0; i<tam(opera); i++){
        if(m+opera[i] <= op){
            m+=opera[i];
            ans--;
        }else{
            break;
        }
      }

      if(ans==0) ans++;
      
      cout << ans << endl;
    }

    return 0;
}