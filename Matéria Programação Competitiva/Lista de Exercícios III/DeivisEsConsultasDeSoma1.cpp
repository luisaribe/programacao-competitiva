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

    ll n, q, l, r;

    cin >> n >> q;
    vector <ll> v(n);
    vector <ll> psum(n+1);
    psum[0]=0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        psum[i+1] = psum[i] + v[i];
    }
    for(ll i=0; i<q; i++){
        cin >> l >> r;
        cout << (psum[r] - psum[l-1]) << endl;
    }

    return 0;
}