#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, a, b, c, count=0, qnt=0;

    cin >> testes;

    while(testes--){

        cin >> a >> b >> c;

        if(a)
            count++;
        if(b)
            count++;
        if(c)
            count++;

        if(count >= 2)
            qnt++;

        count=0;
    }

    cout << qnt << "\n";

    return 0;
}