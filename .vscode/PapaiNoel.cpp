#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){

    ll peso, testes, id=0, maiorzinho;
    stack <pair <ll, ll>> pilha;
    priority_queue<pair<ll, ll>> maior;
    vector<ll>pode;
    char op;
    pair<ll, ll>a;
    
    scanf("%lld", &testes);
    getchar();

    while(testes--){

        scanf("%c %lld", &op, &peso);
        getchar();

        if(op == 'A'){
            pilha.push({peso, id});
            //maior[id]={peso, id};
            maior.push({peso, id});
            pode.push_back(peso);
            id++;
        }else{
            if(op == 'V'){
                maiorzinho=0;
                if(!maior.empty()){
                a = maior.top();//5,0
                //printf("%lld %lld %lld\n", pode[a.second], a.second, a.first);
                    
                    while( !maior.empty()){
                        if(pode[a.second] < 0){ 
                        maior.pop();
                        }
                        if(!maior.empty()){ 
                        a = maior.top();
                        maiorzinho = a.first;
                            if(pode[a.second]>=0){
                                break;
                            }
                        }else{
                            maiorzinho = 0;
                            break;
                        }
                    }
                }
                printf("%lld\n", maiorzinho);
            }else{
                
                if(!pilha.empty()){ 
                    a = pilha.top();
                    pode[a.second] = -1;
                    pilha.pop();
                }
            }
        }
    }

    return 0;
}
