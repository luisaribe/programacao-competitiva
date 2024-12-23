#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long testes, tam, menor, comer;

    cin >> testes;

    while(testes--){

        cin >> tam;
        vector <long long> v(tam);
        menor =0;
        comer =0;

        for (int i=0; i<tam; i++){
            cin >> v[i];
            if(i = 0){
                menor = v[i];
            }else{ 
                if(v[i] < menor){
                    menor = v[i];
                
                }
            }
        }

//cout << "menor" << menor << "\n";
        for(int i=0; i<tam-1; i++){
            if(v[i] != menor){
                long long a = v[i] - menor;
                comer+= a;
                //cout << "comer : " << comer << "\n";
            }
        }

        cout << comer << "\n";
    }

    return 0;
}