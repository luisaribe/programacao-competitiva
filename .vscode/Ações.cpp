#include <bits/stdc++.h>

using namespace std;

int main (){
    int  numeros, pi, x, dias, ans;

    scanf("%d %d %d %d", &numeros, &pi, &x, &dias);

    if(numeros%2 ==0){
        if(dias %2!=0){
            ans = pi-x;
        }else{
            ans = pi;
        }
    }else{
        if(dias%2!=0){
            ans = pi +x;
        }else{
            ans = pi;
        }
    }

    printf("%d\n", ans);

    return 0;
}