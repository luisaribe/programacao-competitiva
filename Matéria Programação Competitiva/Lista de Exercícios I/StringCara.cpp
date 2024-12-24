#include <bits/stdc++.h>

using namespace std;

int main (){

    int casos, tam, a, b, multiplica_b;
    char str[1000];

    scanf("%d", &casos);

    while (casos >0){

        int pontos=0, diferentes=0;
        scanf("%d %d %d", &tam, &a, &b);
        scanf("%s", str);

        if(b > 0 || tam ==1){
            pontos = a*tam + b*tam;
        }else{
            for(int i=1; i<tam; i++){
                if(str[i] != str[i-1]){
                    diferentes++;
                }
            }
            if(diferentes%2!= 0){
                multiplica_b = ((diferentes+1)/2)+1;
            }else{
                multiplica_b = (diferentes/2) + 1;
            }
            pontos = a*tam + multiplica_b * b;
        }

        printf("%d\n", pontos);

        casos--;
    }

    return 0;
}