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

    ll n, m, k, n_bolinhas=0, v;
    char lab[502][502], novo[502][502];
    bool visited[502][502];

    void percorrer(ll i, ll j, ll x, ll y){
        if (v == n_bolinhas - k) return;
        v++;
        novo[i][j]='.';

        visited[i][j]=true;

        if((i+1 != x || j != y) && lab[i+1][j] == '.' && !visited[i+1][j]){
            percorrer(i+1,j,i,j);
        }

        if((i != x || j+1 != y) && lab[i][j+1] == '.' && !visited[i][j+1]){
            percorrer(i,j+1,i,j);
            
        }

        if((i-1 != x || j != y) && lab[i-1][j] == '.' && !visited[i-1][j]){
            percorrer(i-1,j,i,j);
           
        }

        if((i != x || j-1 != y) && lab[i][j-1] == '.' && !visited[i][j-1]){
            percorrer(i,j-1,i,j);
         
        }

    }

    void solve(){
        memset(novo,'#',sizeof(novo));
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(!visited[i][j] && lab[i][j]=='.'){
                v=0;
                memset(novo,'#',sizeof(novo));
                percorrer(i,j,-1,-1);
                if(v==n_bolinhas-k){
                    return;
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
    for(ll i=0; i<=n+1; i++){
        for(ll j=0; j<m+1; j++){
            if(i>0 && j>0 && i<n+1 && j<m+1){
                cin >> lab[i][j];
                if(lab[i][j]=='.'){
                    n_bolinhas++;
                } 
            }else{
                lab[i][j]='#';
            }
        }
    }

    solve();

    for(ll i=1; i<n+1; i++){
        for(ll j=1; j<m+1; j++){
            if(lab[i][j]=='.' && novo[i][j]!='.'){
                cout << 'X';
            }else{
                cout << lab[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}