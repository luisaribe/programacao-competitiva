#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){

    ll n, tempo, paciencia, retorna, timeline=0, paciencia_atual;
    queue <tuple <ll, ll, ll, ll, ll, ll>> fila; //tempo<0>, paciencia<1>, retorna<2>, paciencia_atual<3>, id<4>, quando_voltou<5>

    priority_queue <tuple <ll, ll, ll, ll, ll>, vector<tuple< ll, ll, ll, ll, ll>>, greater<>> prioridade_paciencia; //paciencia_atual<0>, id<1>, paciencia<2>, tempo<3>, retorna<4>
    priority_queue<tuple<ll, ll, ll, ll, ll, ll>, vector<tuple<ll, ll, ll, ll, ll, ll>>, greater<>> voltara; //quando_volta<0>, id<1>, tempo<2>, paciencia<3>, retorna<4>, paciencia_atual<5>

    tuple <ll, ll, ll, ll, ll> cliente; 
    tuple <ll, ll, ll, ll, ll, ll> cliente_fila;
    tuple <ll, ll, ll, ll, ll, ll> a;

    scanf("%lld", &n);
    vector <ll> v (n, 0); //id do cliente pra ver se ele foi atendido

    for(ll i=0; i<n; i++){
        scanf("%lld %lld %lld", &tempo, &paciencia, &retorna);
        paciencia_atual=paciencia;

        fila.push({tempo, paciencia, retorna, paciencia_atual, i, 0});
        prioridade_paciencia.push({paciencia_atual, i, paciencia, tempo, retorna});

    }

    while(!fila.empty() || !prioridade_paciencia.empty() || !voltara.empty()){

        if(!fila.empty()){ 
            cliente_fila = fila.front();
            fila.pop(); //se a paciencia atual for menor que a timeline ele vai ser mexido pela fila de paciencia
            if(get<3>(cliente_fila) >= timeline){ //se paciencia atual for maior ou igual a timeline
                if(get<5>(cliente_fila) == 0 || get<5>(cliente_fila) <=timeline){ 
                timeline+=get<0>(cliente_fila); // a timeline aumenta o tempo que o cliente sera atendido

                v[get<4>(cliente_fila)]++; //marca que o cliente foi atendido no vetor de ids
                }else{
                    if(get<5>(cliente_fila) > timeline){
                        timeline = get<5>(cliente_fila)+get<0>(cliente_fila);
                        v[get<4>(cliente_fila)]++;
                    }
                }
                //printf("incremento %lld %lld %lld\n", get<4>(cliente), get<0>(cliente), timeline);
            }
            //printf("so pop %lld %lld %lld\n", get<4>(cliente), get<0>(cliente), timeline);
        }

        if(!prioridade_paciencia.empty()){ 
        cliente= prioridade_paciencia.top();
                //fila; //tempo<0>, paciencia<1>, retorna<2>, paciencia_atual<3>, id<4>
                //prioridade_paciencia; //paciencia_atual<0>, id<1>, paciencia<2>, tempo<3>, retorna<4>
                //voltara; //quando_volta<0>, id<1>, tempo<2>, paciencia<3>, retorna<4>, paciencia_atual<5>
            if(get<0>(cliente) < timeline && v[get<1>(cliente)]==0){ //se paciencia atual for menor que a timeline e nao tiver sido atendido ainda
                prioridade_paciencia.pop(); //sai fila de paciencia e vai pra fila de voltar
                a= make_tuple(get<0>(cliente)+get<4>(cliente), get<1>(cliente), get<3>(cliente), get<2>(cliente), get<4>(cliente), get<2>(cliente)+get<0>(cliente)+get<4>(cliente));
                voltara.push(a);
                //printf("criou voltara %lld %lld %lld %lld %lld\n", get<1>(cliente), get<0>(cliente), get<4>(cliente), get<2>(cliente), timeline);
            }else{
                if(v[get<1>(cliente)] > 0){ // se foi atendido, so sai 
                    //printf("deu %lld %lld %lld\n", get<1>(cliente), get<0>(cliente), timeline);
                    prioridade_paciencia.pop();
                }
            }
        }

        if(fila.empty()){
            if(!voltara.empty()){ //se a fila ta vazia mas tem gnt pra voltar pode pular a timeline pra quando eles voltam
                if(get<0>(a) > timeline){ 
            a= voltara.top();
            timeline= get<0>(a);
            //printf("voltara qnd nao tem fila %lld %lld %lld\n", get<1>(a), get<0>(a), timeline);
                }
            }
        }
        if(!voltara.empty()){ 
            a= voltara.top();
            if(get<0>(a) <= timeline){
                //fila; //tempo<0>, paciencia<1>, retorna<2>, paciencia_atual<3>, id<4>
                //prioridade_paciencia; //paciencia_atual<0>, id<1>, paciencia<2>, tempo<3>, retorna<4>
                //voltara; //quando_volta<0>, id<1>, tempo<2>, paciencia<3>, retorna<4>, paciencia_atual<5>
                voltara.pop();
                cliente_fila= make_tuple(get<2>(a), get<3>(a), get<4>(a), get<5>(a), get<1>(a), get<0>(a));
                fila.push(cliente_fila);
                cliente= make_tuple(get<5>(a), get<1>(a), get<3>(a), get<2>(a), get<4>(a));
                prioridade_paciencia.push(cliente);
                //printf("voltara pop %lld %lld %lld\n", get<1>(a), get<0>(a), timeline);
            }
        }
        
    }

    printf("%lld", timeline);

    return 0;
}