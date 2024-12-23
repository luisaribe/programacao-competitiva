#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testes, emcasa, notrabalho;
    char choveuida, choveuvolta;

    cin >> testes >> emcasa >> notrabalho;

    while(testes--){
        cin >> choveuida >> choveuvolta;
        if(choveuida == 'Y' || notrabalho == 0){
            cout << "Y" << " ";
            emcasa--;
            notrabalho++;
        }else{
            cout << "N" << " ";
        }

        if(choveuvolta == 'Y' || emcasa == 0){
            cout << "Y" << "\n";
            notrabalho--;
            emcasa++;
        }else{
            cout << "N" << "\n";
        }
    }

    return 0;
}