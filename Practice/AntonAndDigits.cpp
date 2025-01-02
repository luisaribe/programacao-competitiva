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

    ll menor, aux, n;
    vector <ll> k(4);
    for(ll i=0; i<4; i++){
        cin >> aux;
        k[i] = aux;
        if(i==0){
            menor=aux;
        }else{
            if(i>1 && aux < menor){
                menor = aux;
            }
        }
    }

    if(k[0] - menor > k[1]){
        n = k[1];
    }else{
        n = k[0] - menor;
    }

    cout << (menor*256+n*32) << endl;

    return 0;
}