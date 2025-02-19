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

    ll n, t, l, r, ans, soma;

    cin >> n >> t;
    vector<ll>livros(n);

    for(ll i=0; i<n; i++){
        cin >> livros[i];
    }

   

    l=0; r=0;
        soma = 0;
        ans=0;
        while(  r<n){
                soma+=livros[r];
            
                while (soma > t) {
                    soma -= livros[l];
                    l++;
                    
                 }
              
                    /*
                    l++;
                    r++;
                    soma-=livros[l];
                    soma+=livros[r];
                    if(qnt > ans){
                        ans = qnt;
                    }
                    */
                
                if(r-l+1> ans){
                        ans = r-l+1;
               }
              r++;  
        }

    cout << ans << endl;

    return 0;
}