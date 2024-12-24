#include <bits/stdc++.h>

using namespace std;

int buscaa(char str[28]){
    for(int i=0; i<strlen(str); i++){
        if(str[i]=='a'){
            return i;
        }
    }
    return -1;
}

int main (){

    int testes, posicao_a, borda_begin, borda_end, letras=0;
    char str[28];

    scanf("%d", &testes);

    while(testes>0){

        letras = 0;

        scanf("%s", str);

        for(int i='a'; i<='z'; i++){

            posicao_a = buscaa(str);
            

            if (posicao_a == -1)
            break;

            if(i=='a'){
                
                borda_begin = posicao_a;
                borda_end = posicao_a;
                letras++;
            }else{
                if(str[borda_begin-1] == i){
                    borda_begin--;
                    letras++;
                }else{
                    if(str[borda_end+1] == i){
                        borda_end++;
                        letras++;
                    }else{
                        break;
                    }
                }
            }
        }

        if(letras == strlen(str)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }

        testes--;
    }

    return 0;
}