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

    ll n, q, l, r, x;

    cin >> n >> q;

    vll v(n+2, 0);
    vll psum(n+2, 0);

    for(ll i=0; i<q; i++){
        cin >> l >> r >> x;
        v[l]+=x;
        v[r+1]-=x;
    }

    for(ll i=1; i<=n; i++){
        psum[i] = psum[i-1] + v[i];
        cout << psum[i] << ' ';
        //cout << v[i]+v[i-1] << ' ';
    }

    return 0;
}