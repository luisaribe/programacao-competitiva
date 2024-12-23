#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, qnt, ans, pordois;

    cin >> n;

    while(n){
        ans=0;
        pordois=0;
        while(n--){
            cin >> a >> qnt;
            ans+= (qnt/4);
            if(qnt >= 4){ 
            pordois+= ((qnt%4)/2);
            }else{
                pordois+=qnt/2;
            }
        }

        if(pordois%2==0){
            ans+=((pordois)/2);
        }else{
            ans+=((pordois-1)/2);
        }
        cout << ans << "\n";
        cin >> n;
    }

    return 0;
}