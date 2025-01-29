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

    ll lotes, dias, minadubo, l, r, x, ans=0;

    cin >> lotes >> dias >> minadubo;
    vll psum (lotes+2, 0);
    vll v(lotes+2, 0);

    while(dias--){
        cin >> l >> r >> x;
        v[l] += x;
        v[r+1] -= x;
    }

    for(ll i = 1; i <= lotes; i++){
            psum[i] += v[i]+psum[i-1];
            if(psum[i] >= minadubo){
                ans++;
            }
    }

    cout << ans << endl;

    return 0;
}