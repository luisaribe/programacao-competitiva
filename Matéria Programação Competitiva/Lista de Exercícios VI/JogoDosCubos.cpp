#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define tam(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

ll lb(vll v, ll key){
    ll l,r,mid,ans;
    
    l = 0;
    r = v.size()-1;
    ans = -2;
    
    while(l <= r){
        mid=(l+r)/2;
        if(key == v[mid])
        {
            ans= mid;
            r = mid-1;
        }
        else if (v[mid] <key){
            l= mid + 1;
        } else {
            r = mid - 1;
        }
    }
    
    return ans+1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);  
    
    ll c,n, aux, ans;

    cin >> c >> n;
    vll cubos(c);

    for(ll i=0; i<c; i++){
        cin >> cubos[i];
    }

    sort(all(cubos));

    for(ll i=0; i<n; i++){
        cin >> aux;
        ans= lb(cubos, aux);
        cout << ans << " ";
    }
    
    return 0;
}