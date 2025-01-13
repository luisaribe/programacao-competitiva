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

    ll n, q, num;
    set <ll> arv;

    cin >> n;

    while(n--){
        cin >> q >> num;
        if(q==1){
            arv.insert(num);
        }else{
            if(arv.find(num) != arv.end()){
                cout << "Sim" << endl;
            }else{
                cout << "Nao" << endl;
            }
        }
    }

    return 0;
}