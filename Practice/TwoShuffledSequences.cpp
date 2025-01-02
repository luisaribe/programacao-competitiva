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

    ll n, aux;
    bool no = false;

    cin >> n;
    vector<ll>seq(n);
    vector<ll>aumenta;
    vector<ll>diminui;

   for(ll i=0; i<n; i++){
    cin >> seq[i];
   }

    sort(all(seq));

    for(ll i=0; i<n; i++){
        if(i>1){
            if(seq[i] == seq[i-1] && seq[i-1] == seq[i-2]){
                no = true;
                //cout << seq[i] << endl;
                break;
            }
        }
        if(i>0){
            if(seq[i] == seq[i-1]){
                diminui.pb(seq[i]);
            }else{
                aumenta.pb(seq[i]);
            }
        }else{
            aumenta.pb(seq[i]);
        }
    }

    sort(all(diminui), greater<ll>());

    if(no == true){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
        cout << tam(aumenta) << endl;
        for(ll i=0; i<tam(aumenta); i++){
            if(i<tam(aumenta) -1){
                cout << aumenta[i] << " ";
            }else{
                cout << aumenta[i] << endl;
            }
        }
        cout << tam(diminui) << endl;
        for(ll i=0; i<tam(diminui); i++){
            if(i<tam(diminui) -1){
                cout << diminui[i] << " ";
            }else{
                cout << diminui[i] << endl;
            }
        }
    }

    return 0;
}