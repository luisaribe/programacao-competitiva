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

ll Recursao(ll n, ll ans){
    ll a;
    if(n <= 10){
        a= ++ans;
        return a;
    }else{
        ans*=(n/10);
        a=ans;
        return Recursao((n/10), a);
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, ans, n;

    cin >> testes;

    while(testes--){
        cin >> n;
        ans = Recursao(n, 0);
        cout << ans << endl;
    }

    return 0;
}