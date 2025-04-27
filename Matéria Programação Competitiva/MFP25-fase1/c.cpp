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

    ll t, a, x;
    vll v(3);
    cin >> t;
    while(t--){
        a=3;x=0;
        while(a--){
            cin >> v[x];
            x++;
        }
        sort(all(v));
        if(v[0]==v[1]){
            cout << v[2]<< endl;
        }else{
            cout <<v[0]<< endl;
        }
    }

    return 0;
}