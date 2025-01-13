#include <stdio.h>

int main (){
    int v[40], n, ans;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        if(i==0){
            ans=1;
        }else{
            if(i==1){
                ans=1;
            }else{
                ans = v[i-2] + v[i-1];
            }
        }
        v[i] = ans;
    }

    for(int i=n-1; i>=0; i--){
        if(i == 0){
            printf("%d\n", v[i]);
        }else{
        printf("%d ", v[i]);
        }
    }

    return 0;
}