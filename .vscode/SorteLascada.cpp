#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char str[8];
    long long testes, soma1, soma2;

    cin >> testes;

    while(testes--){

        soma1=0;
        soma2=0;

        cin >> str;

        for(int i=0; i<6; i++){
            if(i<3){
                soma1+=str[i];
            }else{
                soma2+=str[i];
            }

        }

        if(soma1 == soma2){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }



    return 0;
}