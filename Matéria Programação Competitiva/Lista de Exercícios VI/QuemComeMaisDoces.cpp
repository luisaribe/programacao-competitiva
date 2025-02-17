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

bool check(ll n, ll mid){
    ll a=0, inicio=n;
    while(n){
        if(n>=mid){
            n-=mid;
            a+=mid;
        }else{
            a+=n;
            n=0;
        }

        n-=(n/10);
    }

    if((a*2)>=inicio) return true;

    return false;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, l, r, ans, mid;

    cin >> n;

    ans=n;
    l=1;
    r=n;
    while(l<=r){
        mid=(l+r)/2;
        if(check(n, mid)==true){
            ans=mid;
            r= mid-1;
        }else{
            l= mid+1;
        }
    }
    cout << ans << endl;
    return 0;
}