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

    ll testes, qnt, aux, menor_a, menor_b, moves, menor;

    cin >> testes;

    while(testes--){
        moves =0;
        cin >> qnt;
        vector <ll> a(qnt);
        vector <ll> b(qnt);

        for(ll i=0; i<2*qnt; i++){
            if(i<qnt){
                cin >> a[i];
                if(i==0){
                    menor_a = a[i];
                }else{
                    if(a[i] < menor_a){
                        menor_a = a[i];
                    }
                }
            }else{
                cin >> b[i-qnt];
                if(i==qnt){
                    menor_b = b[i-qnt];
                }else{
                    if(b[i-qnt] < menor_b){
                        menor_b = b[i-qnt];
                    }
                }
            }
        }

        for(ll i =0; i<qnt; i++){
            menor=a[i] - menor_a;
            if((b[i] - menor_b) < menor){
                menor= b[i] - menor_b;
            }

            moves+=menor;
            moves+=(a[i]- menor_a -menor);
            moves+=(b[i]- menor_b -menor);
        }

        cout << moves << endl;
    }

    return 0;
}