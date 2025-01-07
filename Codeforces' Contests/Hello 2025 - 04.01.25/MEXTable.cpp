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

    ll testes, n1, n2, num;

    cin >> testes;

    while(testes--){
        cin >> n1 >> n2;

        if(n1 > n2){
            num = n1;
        }else{
            num = n2;
        }

        cout << num+1 << endl;
    }

    return 0;
}