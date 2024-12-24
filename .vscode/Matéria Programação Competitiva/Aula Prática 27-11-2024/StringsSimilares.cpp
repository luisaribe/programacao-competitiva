#include <bits/stdc++.h>

using namespace std;

int main (){

    int num, tam, testes;
    char str[1000];

    scanf("%d", &testes);

    while(testes--){

        scanf("%d" ,&num);

        scanf("%s", str);

        for(int i=0; i<num; i++){
            if(i==num-1){
            printf("%c\n", str[i]);
            }else{ 
            printf("%c", str[i]);
            }
        }
    }

    return 0;
}