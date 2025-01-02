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

    ll qnt;

    cin >> qnt;

    if(qnt%2==0){ 
        for(ll i=1; i<=qnt; i++){
            if(i%2!=0){
                cout << i+1 << ' ';
            }else{
                cout << i-1 << ' ';
            }
        }
    }else{
        cout << "-1" << endl;
    }

    return 0;
}