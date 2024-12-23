#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long testes, tam, menor, comer;

    //cin >> testes;
    scanf("%lld", &testes);

    while(testes--){

        //cin >> tam;
        scanf("%lld", &tam);
        vector <long long> v(tam);
        comer =0;

        for (int i=0; i<tam; i++){
            //cin >> v[i];
            scanf("%d", &v[i]);
            if(i = 0){
                menor = v[i];
            }else{ 
            if(v[i] < menor){
                menor = v[i];
                
            }
            }
        }

   //cout << "menor" << menor << "\n";

        for(int i=0; i<tam; i++){
            if(v[i] != menor){
                //long long a = v[i] - menor;
                comer+= (v[i] - menor);
                //cout << "comer : " << comer << "\n";
            }
        }

        //cout << comer << "\n";
        printf("%lld\n", comer);
    }

    return 0;
}