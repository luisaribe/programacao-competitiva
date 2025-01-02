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

    string str;
    ll tam;
    stack <char> pilha;
    bool ans = true;
    ll tolerancia_fecha = 0;
    ll tolerancia_abre = 0;

    cin >> tam;

    cin >> str;

    for(ll i=0; i<tam;i++){
        if(str[i] == '('){
            pilha.push(str[i]);
        }else{
            if(!pilha.empty()){
                pilha.pop();
            }else{
                if(tolerancia_fecha < 1){
                    tolerancia_fecha++;
                }else{
                    ans = false;
                }
            }
        }
    }

    if(tolerancia_fecha == 1){
        if(pilha.empty()){
            ans = false;
        }else{
            if(tam(pilha) != 1){
                ans = false;
            }else{
                pilha.pop();
            }
        }
    }

    if(ans == true && pilha.empty()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}