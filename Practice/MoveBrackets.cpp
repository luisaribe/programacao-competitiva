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

    ll testes, qnt;

    cin >> testes;

    while(testes--){
        string str;
        cin >> qnt >> str;
        stack<char> pilha;

        for(ll i=0; i<qnt; i++){
            if(str[i] == '('){
                pilha.push(str[i]);
            }else{
                if(!pilha.empty()){
                    pilha.pop();
                }
            }
        }

        cout << tam(pilha) << endl;
    }

    return 0;
}