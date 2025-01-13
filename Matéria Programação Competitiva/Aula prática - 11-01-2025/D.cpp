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

    ll n, s1=0, s2=0, s3=0, aux;

    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> aux;
        s1+=aux;
    }

    for(ll i=0; i<n-1; i++){
        cin >> aux;
        s2+=aux;
    }

    for(ll i=0; i<n-2; i++){
        cin >> aux;
        s3+=aux;
    }

    cout << s1-s2 << endl << s2-s3 << endl;

    return 0;
}