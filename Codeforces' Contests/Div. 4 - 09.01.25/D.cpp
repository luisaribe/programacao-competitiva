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

    ll m, n, t, qnt;

    cin >> t;

    while(t--){
      cin >> n >> qnt;
     m=n;
      ll matriz[n][qnt], somas[n][qnt];
      vector<pll> su(n, make_pair(0, 0));
      while(n--){
          for(ll i=0; i< qnt; i++){
              cin >> matriz[m-n][i];
              
              if(i>0){
              somas[m-n][i]= somas[m-n][i-1]+matriz[m-n][i];
              }else{
                somas[m-n][i]= matriz[m-n][i];
              }
              
            }
          su.pb({(somas[m-n][qnt-1]), (m-n)});
      }
      sort(all(su));
      ll total=0;
      for(ll i=0; i<tam(su); i++){
          for(ll j=0; j<qnt; j++){
              total+=somas[i][j];
          }
      }
      
      cout << total << endl;
    }

    return 0;
}

/*

*/