#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;


int msb(ll n) {
    int i = 0;
    while (n > 0) {
        n >>= 1;  
        i++;      
    }
    return i - 1;  
}

ll inverter(ll n) {
    
    ll mascara = (1LL << (msb(n) + 1)) - 1;
    return n ^ mascara;
}


int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin >> n;

    cout << n << " " << inverter(n) << endl;

    return 0;
}