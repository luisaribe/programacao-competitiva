#include <stdio.h>

int main(){

    int n, v[200002], ans=0, p, maior=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);  
    }
    for(int i=0; i<n; i++){
        maior=0;
        for(int j=i+1; j<n; j++){
            if(v[i] + v[j] +  (j-i) > maior){
                maior = v[i] + v[j] +  (j-i);
            }
        }
        if(maior > ans){
            ans = maior;
        }
    }

    printf("%d\n", ans);

    return 0;
}