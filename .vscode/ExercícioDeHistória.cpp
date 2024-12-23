#include <bits/stdc++.h>

using namespace std;

int main (){

    int ano, testes, sec;

    while(scanf("%d", &ano) != EOF){

        if(ano%100 == 0){
            sec = ano/100;
        }else{
            sec = ano/100 +1;
        }

        printf("%d\n", sec);
    }

    return 0;
}