#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll a, b, c, d;

    cin >> a >> b >> c >> d;

    set <ll> conj;

    conj.insert(a);
    conj.insert(b);
    conj.insert(c);
    conj.insert(d);

    ll ans = 4 - (ll)conj.size();

    cout << ans;
    
    return 0;
}