#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll chegada, saida, motoristas, carros_possiveis, cheio=0;

    cin >> motoristas >> carros_possiveis;

    while(motoristas || carros_possiveis){
        bool flag = true;
        cheio=0; 
        stack<ll> out;
        while(motoristas--){ 


            cin >> chegada >> saida;

           
            while(!out.empty() && out.top() <= chegada){
                out.pop();
            }

 
            if(!out.empty()){
                if(out.size() >= carros_possiveis || out.top() < saida){ 
                flag = false;
                }
            }

            out.push(saida);

        }

        if(flag == false){
            cout << "Nao" << "\n";
        }else{
            cout << "Sim" << "\n";
        }

        cin >> motoristas >> carros_possiveis;
    }

    return 0;
}

       /*

        if(out.size() >= carros_possiveis){
                flag = false;
            }else{
                if(out.empty()){
                    out.push(saida);
                }
                else{
                    if(out.top() > saida){
                        out.push(saida);
                    }else{
                        flag = false;
                    }
                }
            }
        }

        */