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

ll check(vll& ataques, ll c){
    ll ans=0;
    for(ll i=0; i<tam(ataques); i++){
        if(i<tam(ataques)-1){
            if(ataques[i]+c>=ataques[i+1]){
                ans+=min(c, ataques[i + 1] - ataques[i]);
            }else{
                ans+=c;
            }
        }else{
            ans+=c;
        }
    }

    return ans;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t, n, danos, chute, ans, l, r, mid;

    cin >> t;

    while(t--){
        cin >> n >> danos;
        vll ataques(n);
        for(ll i=0; i<n; i++){
            cin >> ataques[i];
        }
        ans=danos;
        l = 1;
        r =danos;
        
        while(l<=r){
            mid=(l+r)/2;
            chute = check(ataques, mid);
            if(chute < danos){
                l=mid+1;
            }else{
                r=mid-1;
                ans=mid;
            }
        }

        cout << ans << endl;
    }

    return 0;
}