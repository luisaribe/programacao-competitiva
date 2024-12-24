/* tle */

#include <bits/stdc++.h>

using namespace std;

int main (){

    char str[100002];
    queue <char> fila;
    int verificar=0, contagem=0, no=0;

    scanf("%s", str);

    verificar= strlen(str);

    for(int i=0; i<strlen(str); i++){
        if(i%2!=0){
            if(str[i] != str[i-1]){
                fila.push(str[i-1]);
                fila.push(str[i]);
            }
        }else{
            if(i=strlen(str)-1){
                fila.push(str[i]);
            }
        } 
    }

    while(!fila.empty()){
        char item = fila.front();

        fila.pop();

        if(fila.front() == item){
            fila.pop();
            contagem =0;
            verificar = fila.size();
        }else{
            fila.push(item);
            contagem++;
            if(contagem == verificar){
                no++;
                break;
            }
        }
    }

    if(no){
        printf("No\n");
    }else{
        printf("Yes\n");
    }

    return 0;
}