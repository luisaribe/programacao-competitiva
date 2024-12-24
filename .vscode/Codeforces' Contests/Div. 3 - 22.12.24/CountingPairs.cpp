/*
Problem D div.3 

22/12/24

não resolvi :/
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll qnt, testes, min, max, pares, aux;

    cin >> testes;

    while(testes--){
        cin >> qnt >> min >> max;
        vector <pair <ll, ll>> v(qnt);
        for(ll i=0; i<qnt; i++){
            cin >> aux;
            v[i].first = aux;
            v[i].second = i;
        }

        sort(v.begin(), v.end());
        pares=0;
        for(ll i=0; i<qnt; i++){ 
            
            ll q = v[i].first;
            *p1 = 
        ll a = upper_bound(v.first.begin() , v.first.end(), max - q) - v.first.begin();
        ll b = lower_bound(v.first.begin() , v.first.end(), min - q) - v.first.begin();

                
                //if(a.second >= b.s){ 
                
                pares += (a - b);
        //}
        }

        cout << pares << "\n";
    }

    return 0;
}