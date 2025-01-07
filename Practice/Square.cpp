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

    ll testes, n1, n2, n3, n4;

    cin >> testes;

    while(testes--){
        bool flag = false;
        cin >> n1 >> n2 >> n3 >> n4;
        if(n1 == n3 && n1==n2+n4 || n1 == n4 && n1 == n2+n3 || n2 == n3 && n2== n1+n4 || n2 == n4 && n2==n1+n3){
            flag = true;
        }
        if(flag == true){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}