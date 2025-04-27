/*nao consegui*/
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

    ll p, r, c=0, d=0, x, y;

    cin >> p >> r;

    vll v(p-1);
    for(ll i=0; i<r; i++){
        cin >> x >> y;
        if(y-x==1){
            v[x-1]++;
        }else{
            if(x-y==1){
                v[y-1]++;
            }else{
                d++;
            }
        }
    }
    for(ll i=0; i<p-1; i++){
        if(v[i]==0){
            c++;
        }
    }

    if(d==0 && c==0){
        cout << "BOM"<< endl;
    }else{
    cout << "RUIM"<< " " <<  d << " "<< c << endl;
    }

    return 0;
}