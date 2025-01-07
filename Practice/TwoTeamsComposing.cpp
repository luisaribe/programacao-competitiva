/*
WA - cansei
é alguma coisa relacionada a algoritmos gulosos
*/
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

    ll testes, qnt;

    cin >> testes;

    while(testes--){
        cin >> qnt;
        vector <ll> v(qnt);    

        for(ll i=0; i<qnt; i++){
            cin >> v[i];
        }

        sort(all(v));
        vector <ll> diferentes;
        vector <ll> tamanhos;
        ll iguais=0;
        
        for(ll i=0; i<qnt; i++){
            if(i==0){
                diferentes.pb(v[i]);
            }else{
                if(v[i]!=v[i-1]){
                    diferentes.pb(v[i]);
                    tamanhos.pb(iguais);
                    iguais=0;
                }else{
                    iguais++;
                }
            }
        }
        
    tamanhos.pb(iguais); 
        
        sort(all(tamanhos));

       ll a = tamanhos[tam(tamanhos) - 1];
       if(a== 0 && qnt>1){
        a++;
       }
       if(a < tam(diferentes)){
        cout << a << endl;
       }else{
        cout << tam(diferentes) << endl;
       }
    }

    return 0;
}