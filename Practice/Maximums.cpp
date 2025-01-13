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

    ll n, maior=0;
    cin >> n;
    vector<ll>v(n);
    vector<ll>ans(n);
    ll i;
    for( i=0; i<n; i++){
        cin >> v[i];
        ans[i] = v[i]+maior;
        if(ans[i]> maior) maior = ans[i];
    }

    for( i=0; i<n; i++){
        cout << ans[i] << " ";
    }
    return 0;
}