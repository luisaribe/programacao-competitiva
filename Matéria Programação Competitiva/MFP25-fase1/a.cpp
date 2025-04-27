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

    ll a, b;

    cin >> a >> b;
    vll m(a);

    for(int i=0; i<a; i++){
        cin >> m[i];
    }
    sort(all(m));
    for(int i=1; i<=b; i++){
        //long long upp = upper_bound(m.begin() , m.end(), i) - m.begin();
        long long loo = lower_bound(m.begin() , m.end(), i) - m.begin();
        
        cout << a-loo << " ";
        
    } 
    return 0;
}