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

char board[102][102];

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll m, n;

    cin >> m >> n;

    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
                cin >> board[i][j];  
                if(board[i][j]=='.'){
                    if((i+j)%2){
                        board[i][j]='B';
                    }else{
                        board[i][j]='W';
                    }
                }
        }
    }

    for(ll i=0; i<m; i++){
        for(ll j=0; j<n; j++){
             cout << board[i][j];
             if(j==n-1) cout << endl;    
        }
    }

    return 0;
}