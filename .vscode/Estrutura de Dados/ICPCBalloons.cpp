#include <bits/stdc++.h>

using namespace std;

int main (){

    int testes, tam, balloons;
    char str[51];

    scanf("%d", &testes);

    while(testes--){

        scanf("%d", &tam);
        vector <int> alpha(26, 0);
        balloons=0;
        scanf("%s", str);

        for(int i=0; i<tam; i++){
            if(alpha[str[i]-'A'] != 0){
                alpha[str[i]-'A']++;
                balloons++;
            }else{
                alpha[str[i]-'A']+=2;
                balloons+=2;
            }
        }

        printf("%d\n", balloons);
    }

    return 0;
}

