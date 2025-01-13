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

    ll n, ans=0, maior, menor;

    cin >> n;
    vector <ll> v(n);

    for( ll i=0; i<n; i++){
        cin >> v[i];
        if(i==0){
            maior=v[i];
            menor=v[i];
        }else{
            if(v[i] > maior){
                ans++;
                maior = v[i];
            }
            if(v[i] < menor){
                ans++;
                menor= v[i];
            }
        }
    }

    cout << ans << endl;

    return 0;
}