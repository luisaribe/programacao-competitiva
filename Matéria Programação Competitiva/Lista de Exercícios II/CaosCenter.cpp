#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, tempo, paciencia, retorno, horario, paciencia_atual, timeline =0;
    priority_queue <tuple <ll, ll, ll, ll, ll, ll>, vector<tuple< ll, ll, ll, ll, ll, ll>>, greater<>> fila;
    // <0> horario, <1> id, <2> paciencia_atual, <3> tempo, <4> paciencia, <5> retorno;
    tuple <ll, ll, ll, ll, ll, ll> cliente;

    cin >> testes;
    ll chegada =0;
    ll aux = (-1)*testes;
    while(testes--){
        cin >> tempo >> paciencia >> retorno;
        horario = aux;
        aux++;
        paciencia_atual = paciencia;
        fila.push({horario, chegada, paciencia_atual, tempo, paciencia, retorno});
        chegada++;
    }

// <0> horario, <1> id, <2> paciencia_atual, <3> tempo, <4> paciencia, <5> retorno;
    while(!fila.empty()){
        cliente = fila.top();
        fila.pop();
        if(get<2>(cliente) >= timeline){
            if(get<0>(cliente) < timeline){ 
                timeline+=get<3>(cliente);
            }else{
                timeline=(get<0>(cliente)+get<3>(cliente));
            }
        }else{
            fila.push({get<2>(cliente)+get<5>(cliente), get<1>(cliente), get<2>(cliente)+get<4>(cliente)+get<5>(cliente),get<3>(cliente), get<4>(cliente), get<5>(cliente)});
        }
    }

    cout << timeline << endl;

    return 0;
}