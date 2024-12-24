#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;

    cin >> n;

    while(n%2==0) n/=2;
    
    cout << n << endl;

    return 0;
}