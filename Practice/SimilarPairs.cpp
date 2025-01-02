/*
WA (preciso reorganizar minhas ideias e mudar de estratégia)
*/
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

int Par( ll a){
    if(a%2==0){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, len;
    cin >> testes;

    while(testes--){
        cin >> len;
        vector <ll> v (len);
        ll seguidos=0, par=0, impar=0;
        ll todospares=0, todosimpares = 0;

        for(ll i=0; i<len; i++){
            cin >> v[i];
        }

        sort(all(v));

        for(ll i=0; i<len; i++){
            
        }

        if((Par(todospares) && Par(todosimpares)) || (Par(par) && Par(impar))){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

/*
5
4
1 1 2 3
4
1 1 2 4
4
1 1 2 5
4
1 1 2 6
4
1 1 3 1
*/