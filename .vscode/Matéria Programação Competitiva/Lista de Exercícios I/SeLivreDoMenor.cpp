#include <bits/stdc++.h>

using namespace std;

int main (){

    long long testes, tam;

    scanf("%lld", &testes);

    while(testes--){
        long long no = 0;

        scanf("%lld", &tam);
        vector<long long>v(tam);

        for(int i=0;i<tam;i++){
            scanf("%lld", &v[i]);
        }

        sort(v.begin(), v.end());

        for(int i=1;i<tam;i++){
            if(v[i] > v[i-1]+1){
                no++;
            }
        }

        if(no){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    return 0;
}