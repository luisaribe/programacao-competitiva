/*
nao consegui mandar pq o vjudge eh uma merda
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testes, num, aux, fil=0, pil=0;
    queue <int> fila;
    stack <int> pilha;

    cin >> testes;

    while(testes--){

        cin >> num;
        fil=0;
        pil=0;
        for(int i=0; i<2*num; i++){

            cin >> aux;

            if(i<num){ 
            fila.push(aux);
            pilha.push(aux);
            }else{
                if(fila.front() != aux){
                    fil++;
                }
                if(pilha.top() != aux){
                    pil++;
                }
                fila.pop();
                pilha.pop();
            }
            
        }
        if(fil == 0 && pil == 0){
                cout << "both" << "\n";
            }else{
                if(fil > 0 && pil == 0){
                    cout << "stack" << "\n";
                }else{
                    if(fil == 0 && pil > 0){
                        cout << "queue" << "\n";
                    }else{
                        cout << "neither" << "\n";
                    }
                }
            }
    }

    return 0;
}