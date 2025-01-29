#include <stdio.h>

int main(){

    int n, x, outro, a;
    scanf("%d", &n);

    while(n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i<j){
                x=i;
                outro =j;
            }else{
                x=j;
                outro=i;
            }

            a=x;
            if(n-outro+1<x){
                a = n-outro+1;
            }

            if(j==n){
                printf("%3d\n", a);
            }else{
                printf("%3d ", a);
            }
        }
    }
    printf("\n");
    scanf("%d", &n);
    }



    return 0;
}