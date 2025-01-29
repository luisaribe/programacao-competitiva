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

ll re(ll n, ll num, ll c){
    c++;
    if(n == 0 || n== 1) return 1;

    if(num == n) return c;

    return re(n, num*c, c);

}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, ans;

    cin >> n;

    ans = re(n, 1, 0);

    cout << ans-1 << endl;

    return 0;
}