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

    ll n, l, r, ultimo=0;

    cin >> n;

    vll v(100002, 0);
    vll psum(100002, 0);

    for(ll i=1; i<=n; i++){
        cin >> l >> r;
        if(l > ultimo){
            ultimo = l;
        }
        if(r>ultimo){
            ultimo = r;
        }
        v[l] ++;
        v[r+1]--;
    }

    ll maior=0;
    for(ll i=1; i<ultimo+1; i++){
        psum[i]=v[i]+psum[i-1];
        if(psum[i]>maior){
            maior = psum[i];
        }
    }

    cout << maior << endl;

    return 0;
}