#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){

    ll n_funcionarios, n_clientes, aux, timeline, maior, a;

    scanf("%lld %lld", &n_funcionarios, &n_clientes);
    priority_queue <tuple<ll, ll, ll>, vector<tuple<ll, ll, ll>>, greater<>> atendimentos;
    queue <ll> clientes;
    priority_queue <pair<ll, ll>, vector<pair<ll, ll>>, greater<>> caixas; // atendido pelo menor numero de identificacao prioridade id
    tuple <ll, ll, ll> c;
    pair <ll, ll> b;

    for(int i=0; i<n_funcionarios+n_clientes; i++){
        scanf("%lld", &aux);
        if(i<n_funcionarios){ 
            caixas.push({i,aux});
        }else{
            clientes.push(aux);
        }
    } 

    timeline =0;
    while(!clientes.empty() || !atendimentos.empty()){

        if(!caixas.empty() && !clientes.empty()){
            b = caixas.top();
            a = clientes.front();
            c = make_tuple((a * (b.second))+timeline, b.first, b.second);
            atendimentos.push(c);
            caixas.pop();
            clientes.pop();
        }

        if(caixas.empty() || clientes.empty()){ 
            if(!atendimentos.empty()){
                c = atendimentos.top();
                atendimentos.pop();
                    if(get<0>(c) > timeline){
                        timeline = get<0>(c);
                    }
                caixas.push({get<1>(c), get<2>(c)});
            }
         }
    }

    printf("%lld\n", timeline);

    return 0;
}