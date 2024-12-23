#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long testes, tam, menor, maior, pares;

    cin >> testes;

    while(testes--){
        pares=0;
        cin >> tam >> menor >> maior;
        vector <long long> v(tam);

        for(int i=0; i<tam; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        for(int i=0; i<tam; i++){

                long long a = upper_bound(v.begin() , v.end(), maior - v[i]) - v.begin();
                long long b = lower_bound(v.begin() , v.end(), menor - v[i]) - v.begin();

                
                if(a >= b){ 
                pares += (a - b);

                if(i < a && i>= b){
                    pares--;
                }
                }
            
        }

        cout << pares/2 << "\n";
    }

    return 0;
}