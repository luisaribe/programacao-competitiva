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
 
    ll n, lev, p, g;
    queue <ll> fila;
 
    cin >> n >> lev >> p;

    for(ll i=lev+1; i<=n; i++){
        fila.push(i);
    }
    for(ll i=1; i<lev; i++){
        fila.push(i);
    }
 
    while(p>=0){
      g = fila.front();
      fila.pop();
        fila.push(g);
        p--;
    }
   cout << g << endl;
 
    return 0;
}