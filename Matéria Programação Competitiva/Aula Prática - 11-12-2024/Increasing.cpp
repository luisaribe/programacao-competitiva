#include <bits/stdc++.h>
 
using namespace std;
 
int main (){
 
    long long testes, tam;
 
    scanf("%lld", &testes);
 
    while(testes--){
        scanf("%lld", &tam);
        vector <long long> v(tam);
        long long ans=0;
 
        for(int i=0; i<tam; i++){
            scanf("%lld", &v[i]);
        }
 
        sort(v.begin(), v.end());
 
        for(int i=1; i<tam; i++){
            if(v[i] == v[i-1]){
                ans++;
                break;
            }
        }
 
        if(ans){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
 
    return 0;
}