/*
Problem A div.3 

22/12/24

não resolvi
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, dias, aux, dif, maiordif;

    cin >> testes;

    while(testes--){
        cin >> dias;
        vector <ll> m(dias);
        vector <ll> soma1(dias, 0);
        vector <ll> s(dias);
        vector <ll> soma2(dias, 0);
        maiordif=0;
        for(ll i=0; i<dias*2; i++){
            cin >> aux;
            if(i<dias){
                m[i]= aux;
                if(i>0)
                soma1[i] = soma1[i-1]+aux;
                else{
                    soma1[i]=aux;
                }
            }else{
                s[i-dias] = aux;
                if(i > dias)
                soma2[i-dias]= soma2[i-dias-1]+aux;
                else{
                    soma2[i-dias]=aux;
                }
            if(s[i-dias] < m[i-dias]){
                
                dif = soma1[i-dias+1] - soma2[i-dias];
                if(dif > maiordif){
                    maiordif = dif;
                }
            }
            }
        }

        cout << maiordif << "\n";
    }

    return 0;
}