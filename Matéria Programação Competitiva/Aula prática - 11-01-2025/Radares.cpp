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

    ll km, n, velmax, l, r, velmed, maior = 0, quantia=0, maior_quantia=0;
    bool gate=false;

    cin >> km >> n >> velmax;
    vll v(km+2, 0);
    vll psum(km+2, 0);

    for(ll i=0; i<n; i++){
        cin >> l >> r >> velmed;
        if(velmed > velmax){
            gate = true;
            v[l]++;
            v[r+1]--;
        }
    }

    /*for(int i=0; i<km+1; i++){
        cout << v[i] << " ";
    }*/

    for(ll i=1; i<km+1;i++){
        psum[i]=psum[i-1]+v[i];
        if(psum[i]>=maior && psum[i-1]!=psum[i]){
            maior =psum[i];
            if(quantia > maior_quantia){
                maior_quantia = quantia;
            }
            quantia=1;
        }else{
            if(psum[i]==maior){
                quantia++;
            }
        }
    }

    if(quantia > maior_quantia){
        maior_quantia = quantia;
    }

    if(gate == false) maior_quantia = -1;

    cout << maior_quantia << endl;

    return 0;
}