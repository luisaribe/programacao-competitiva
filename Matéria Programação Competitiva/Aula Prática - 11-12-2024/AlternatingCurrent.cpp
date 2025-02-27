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
    stack <char> pilha;
    cin >> str;

    for(ll i=0; i<tam(str); i++){
        if(!pilha.empty()){
            if(pilha.top() == str[i]){
                pilha.pop();
            }else{
                pilha.push(str[i]);
            }
        }else{
             pilha.push(str[i]);
        }
    }

    if(pilha.empty()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}