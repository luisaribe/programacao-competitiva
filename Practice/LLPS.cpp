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

    string str;

    cin >> str;

    sort(all(str));

    ll b = lower_bound(all(str), str[tam(str)-1]) - str.begin();
    ll c = tam(str)-b;
    while(c--){
        cout << str[tam(str)-1];
    }

    return 0;
}