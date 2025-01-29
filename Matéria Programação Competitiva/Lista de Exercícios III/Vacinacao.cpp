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
    
    ll n, t, l, r, x, ans=0;

    cin >> n >> t;
    vector <ll> original(n+2, 0);
    vector <ll> psum(n+2, 0);
    vector <ll> dif(n+2, 0);
    vector <ll> v(n+2, 0);
    vector <ll> vpsum(n+2, 0);

    for(ll i=1; i<=n; i++){
        cin >> original[i];
    }

    while(t--){
        cin >> l >> r >> x;
        dif[l]-=x;
        dif[r+1]+=x;
        v[l]++;
        v[r+1]--;
    }

    for(ll i=1; i<=n; i++){
        psum[i]= dif[i]+psum[i-1];
        vpsum[i]=vpsum[i-1]+v[i];
        if((original[i]+psum[i]) > 0){
            ans+=vpsum[i];
        }
    }

    cout << ans << endl;

    return 0;
}