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

int msb(long long n) {
    int i = 0;
    while (n > 0) {
        n >>= 1; 
        i++;      
    }
    return i - 1;  
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t, n, m, pos;

    cin >> t;

    while(t--){
        cin >> n;
        pos = msb(n);
        m = (1LL << (pos))-1;
       
        cout << m << endl;
    }

    return 0;
}