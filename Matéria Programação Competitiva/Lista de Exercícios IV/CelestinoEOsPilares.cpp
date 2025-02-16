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

vll ans;

void montarVetor(ll n,vector<bool> pilares, ll max){
  for (int i = 0; i < 32; i++) {
        int prox = (n ^ (1 << i)); 
        if (prox < max && prox >= 0 && pilares[prox]) {
            ans.pb(prox);
            montarVetor(atual,disponiveis,n);
            pilastres[atual] = false;
        }
    }
}

/*
void montarVetor(int n) {
    for (ll i=0; i<n; i++) {
        /*
        ll a;
        a = (i ^ (i >> 1));
        if(a <n)
        */
        //ans.pb(i ^ ((i >> 1)-1)); 
   // }
    /*
    for (ll i=1; i<n; i+=2) {
        ll a;
        a= (i ^ (i >> 1) );
        if(a <n)
        vetor[i] = i ^ (i >> 1); 
    }
    
    return;
}
*/
int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t, n;
    cin >> t; 
    
    while (t--) {
        cin >> n;  
        ans.clear();
        vector<bool> pilares(n, true); 

        pilares[n - 1] = false;  
        montarVetor(n - 1, pilares, n);

        for (ll i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }



    return 0;
}

/*
4
2
3
5
10

*/