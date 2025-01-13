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

    ll n, maximo, qnt, aux, podem=0, ans=0;
    set <ll> arv;
    set <ll> rep;

    cin >> n >> maximo >> qnt;

    for(ll i=0; i<n; i++){
        cin >> aux;
        if(aux <= maximo){
            if(arv.find(aux)!=arv.end()){
                rep.insert(aux);
            }
            arv.insert(aux);
            podem++;
        }
    }
    if(ll(arv.size())>=qnt)
        ans = (podem - ll(arv.size()))+ll(rep.size());

    cout << ans << endl;

    return 0;
}