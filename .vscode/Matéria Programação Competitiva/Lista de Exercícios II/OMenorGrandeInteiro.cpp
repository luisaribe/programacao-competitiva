#include <bits/stdc++.h>

using namespace std;

int Paridade(char num){
        if((num-'0')%2==0)
        return 0;
    return 1;
}

typedef long long ll;

int main (){

    ll testes, gate=0;
    string str, nova;
    queue <char> fila;
    queue <char> fila1;
    queue <char> fila2;
    char a;

    cin >> testes;

    while(testes--){

        cin >> str;
        nova.clear();

        for(ll i=0; i<str.size(); i++){ 
            fila.push(str[i]);
            if(i>0){
                if(Paridade(str[i]) == Paridade(str[i-1]) && gate<2){
                    fila1.push(str[i-1]);
                    fila.pop();
                }else{
                    if(gate<2){
                        gate=2;
                        fila1.push(str[i-1]);
                        fila2.push(str[i]);
                        fila.pop();
                        fila.pop();
                    }
                }
            }
        }

        gate=0;
        if(!fila.empty()){  
        while(!fila.empty()){
 
            if(gate==0){
                    gate=1;
            }else{ 
                
                if((!fila1.empty() && Paridade(fila.front()) != Paridade(fila1.front()))||(!fila2.empty() && Paridade(fila.front()) != Paridade(fila2.front()))){ 
                        if(fila1.empty()){
                            while(Paridade(fila.front()) != Paridade(fila2.front()) && !fila.empty()){
                                fila1.push(fila.front());
                                    fila.pop();
                            }
                        }else{
                            while(Paridade(fila.front()) != Paridade(fila1.front()) && !fila.empty()){
                                fila2.push(fila.front());
                                    fila.pop();
                            }
                        }
                }else{
                    if(!fila1.empty()){
                        while(!fila.empty() && Paridade(fila.front()) == Paridade(fila1.front())){
                            fila1.push(fila.front());
                            fila.pop();
                        }
                        while(!fila.empty() && Paridade(fila.front()) != Paridade(fila1.front())){
                            fila2.push(fila.front());
                            fila.pop();
                        }
                    }else{
                        while(!fila.empty() && Paridade(fila.front()) == Paridade(fila2.front())){
                            fila2.push(fila.front());
                            fila.pop();
                        }
                        while(!fila.empty() && Paridade(fila.front()) != Paridade(fila2.front())){
                            fila1.push(fila.front());
                            fila.pop();
                        }
                    }
                }
                
            }
            

            while(!fila1.empty() && !fila2.empty()){
                if(fila1.front() < fila2.front()){
                    nova+= fila1.front();
                    a = fila1.front();
                    fila1.pop();
                    
                }else{
                    nova+= fila2.front();
                    a = fila2.front();
                    fila2.pop();
                }
            }

        }
        }else{
            while(!fila1.empty() && !fila2.empty()){
                if(fila1.front() < fila2.front()){
                    nova+= fila1.front();
                   
                    fila1.pop();
                    
                }else{
                    nova+= fila2.front();
                    fila2.pop();
                    
                }
            }
        }

        while(!fila1.empty()){
            nova+= fila1.front();
            fila1.pop();
        }

        while(!fila2.empty()){
            nova+= fila2.front();
            fila2.pop();
        }


        cout << nova << "\n";

    }

    return 0;
}