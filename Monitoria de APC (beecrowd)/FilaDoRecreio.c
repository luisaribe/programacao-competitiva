#include <stdio.h>

int main(){

    int n, m, v[1002], ans, novo[1002], aux;

    scanf("%d", &n);

    while(n--){
        ans=0;
        scanf("%d", &m);
        for(int i=0; i<m; i++){
            scanf("%d", &v[i]);
            novo[i] = v[i];
        }
        for(int i=0; i<m;i++){
            for(int j=i+1; j<m; j++){
                if(novo[i]<novo[j]){
                    aux = novo[i];
                    novo[i]=novo[j];
                    novo[j]= aux;
                }
            }
        }
        for(int i=0; i<m; i++){
            if(v[i]==novo[i]) ans++;
        }

        printf("%d\n", ans);
    }

    return 0;
}