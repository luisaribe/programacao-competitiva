/*nao terminei*/
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

ll n, m, k, total;
vector<pll> vertices;
ll ans[90001];

void percorrer(pll anterior, pll atual, ll ans1, ll count){

    ans[ans1]= atual.first;
    ans[ans1+1]= atual.second;
    ll ansp = ans1+2;
    if(count == (n*m*2)+k){
        ans[ansp]= total;//achar o numero correto
        ansp++;
    }
    if(anterior.second < atual.second && atual.second!= m && atual.first == anterior.first){
        return percorrer(atual, {atual.first, atual.second+1}, ansp, count+1);
    }else{
        if(anterior.second < atual.second && atual.second == m ){ // fazer tratar caso em que for a ultima linha
            return percorrer(atual, {atual.first+1, atual.second}, ansp, count+1);
        }else{
            if(anterior.second == atual.second && anterior.first< atual.first){
                return percorrer( atual, {atual.first, atual.second-1}, ansp, count+1);
            }else{
                if(anterior.second > atual.second && atual.second!= 1 && atual.first == anterior.first){
                    return percorrer(atual, {atual.first, atual.second-1}, ansp, count+1);
                }else{
                    if(anterior.second > atual.second && atual.second== 1 && atual.first == anterior.first){
                        return percorrer(atual, {atual.first+1, atual.second}, ansp, count+1);
                    }else{
                       return percorrer(atual, {atual.first, atual.second+1}, ansp, count+1);
                    }
                }
            }
        }
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;
    total= n*m/k;

    percorrer({0,0}, {1,1}, 0, 0);
    ll p=0;
    for(ll i=0; i<k; i++){
        for(ll j=0; j<(n*m+1); j++){
            cout << ans[p] << " ";
            p++;
        }
        cout << endl;
    }

    return 0;
}