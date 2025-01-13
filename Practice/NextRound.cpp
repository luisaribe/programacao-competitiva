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

    ll n, id, ans, a, b;

    cin >> n >> id;

    vector <ll> v(n);

    for(ll i=0; i<n; i++){
        cin >> v[i];
    }

    a=v[id-1];

    sort(all(v));

    ans = lower_bound(all(v), a) - v.begin();
    b = upper_bound(all(v), -1) - v.begin();

        ans = n - b - ans;
    
    cout << ans << endl;

    return 0;
}