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


pll solve(vll &v, ll n, ll soma)
{
    ll l=0, r=n-1;
    bool gate = false;
    pll ans;
    while( l<r){
        if(v[l]+v[r]<soma){
            l++;
        }else{
            if(v[l]+v[r]==soma){
            if(gate == false){
            ans.first=v[r];
            ans.second=v[l];
            gate = true;
            }else{
            if(abs(v[r]-v[l])<abs(ans.first - ans.second)){
                ans.first=v[r];
                ans.second=v[l];
            }
        }
            l++;
            }else{
                r--;
            }
        }

    }
    
    return ans;
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n, soma;
    pll ans;
    cin >> n >> soma;
    vll precos(n);
    
    for(int i = 0; i < n;i++)
        cin >> precos[i];
    
    sort(all(precos));
    
    ans = solve(precos, n, soma);

    if(ans.first> ans.second){
        swap(ans.first, ans.second);
    }
    cout << ans.first << " " << ans.second << endl;

    return 0;
}