/*WA*/

#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define tam(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll op, q, lastpos, lastlen, aux, id=0, saiu=0;
    queue<tll> fila;
    vector<ll> decontos;
    decontos.pb(0);
    vector<ll> heads;

    cin >> q;

    while(q--){
        cin >> op;
        if(op != 2){
            cin >> aux;
            if(op==1){
                if(fila.empty()){
                    fila.push({0, aux, id});
                    lastlen = aux;
                    lastpos =0;
                    heads.pb(0);
                    id++;
                    decontos.pb(0);
                }else{
                    fila.push({lastpos+lastlen, aux, id});
                    lastpos=lastpos+lastlen;
                    lastlen=aux;
                    heads.pb(lastpos);
                    id++;
                    decontos.pb(0);
                }
            }else{
                ll sum=0;
                ll p=0;
                if(saiu >0){
                    p=saiu-1;
                }
                for(ll i=0; i<aux+p;i++){
                    sum+=decontos[i];
                }
                //cout << "t " << heads.size() << endl;
                cout << heads[aux-1+saiu]-sum << endl;
            }
        }else{
            tll m=fila.front();
            fila.pop();
            saiu++;
            decontos[get<2>(m)+1]=get<1>(m);
            decontos[id+1]=(-1)*get<1>(m);
        }
    }

    return 0;
}