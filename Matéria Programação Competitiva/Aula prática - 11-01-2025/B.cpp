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

    string cima, baixo;
    vector <char> minusculas(27), maiusculas(27);
    ll n, dif;

    cin >> cima >> baixo;
    for(ll i=0; i<26; i++){
        if(cima[i] >= 'a' && cima[i] <= 'z'){
            minusculas[cima[i]-'a']=baixo[i];
            maiusculas[toupper(cima[i])-'A']=toupper(baixo[i]);
        }
    }

    cin >> n;

    while(n--){
        string str, nova;
        cin >> str;

        for(ll i=0; i<tam(str); i++){
            if(str[i]>= 'a' && str[i] <= 'z'){
                nova+=minusculas[str[i]-'a'];
            }else{
                if(str[i]>='A' && str[i]<='Z'){
                nova+=maiusculas[str[i]-'A'];
                }else{
                    nova+=str[i];
                }
            }
        }
        cout << nova << endl;
    }

    return 0;
}