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

    ll m, n, t;

    cin >> t;

    while(t--){
        cin >> n >> m;
        vll v(n), ans(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            ans[i]=v[i];
        }
        cin >> m;
        for(ll i=0; i<n-1; i++){
            if(v[i] > v[i+1]){
                v[i]=m-v[i];
                ans[i]=m-v[i];
            }
        }

        sort(all(ans));
        if(v == ans){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}