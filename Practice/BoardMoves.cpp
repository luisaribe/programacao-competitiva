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

    ll ans, count, testes, n, i, m, oito;

    cin >> testes;

    while(testes--){
        cin >> n;
        n=n*n;
        i=1, oito=8, ans=0, count=0;
        while((count+1)<n){
            ans+=(i*oito);
            oito+=8;
            i++;
            count+=oito;
        }
        if(n==1) ans=0;
        cout << ans << endl;
        
    }

    return 0;
}