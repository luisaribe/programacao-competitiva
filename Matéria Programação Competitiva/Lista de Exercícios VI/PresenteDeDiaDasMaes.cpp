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

bool solve(ll x, vll& caixas, ll m){
    ll total, b;
    if (x==0) return true; 
    total=0;
    for (ll i=0; i<tam(caixas); i++){
    b = caixas[i]; 
    total += (b/x);
    if (total>=m) return true; 
}
    return false;
}

ll busca(ll l, ll r, vll& caixas, ll m){
    ll mid, ans;
    while(l <= r){
        mid = l + ((r-l) / 2);
            if(solve(mid, caixas,m)){
                ans= mid; 
                l=mid +1; 
            }else{
                r=mid-1; 
            }
    }
    return ans;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, m, r, ans;
    cin >> n >> m;
    vll caixas(n);

    for (ll i=0; i<n; i++) {
        cin >> caixas[i];
    }

    //sort(all(caixas));

    r = *max_element(all(caixas)) ;

    ans= busca(0, r, caixas, m);
    cout << ans << endl;

    return 0;
}