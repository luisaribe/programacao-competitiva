#include <bits/stdc++.h>

using namespace std;

int main(){

    long long tam, ans, bar=0, caro;

    scanf("%lld", &tam);
    vector <long long> v(tam);
    vector <long long> novo(tam);
    caro = tam-1;

    for(int i=0; i<tam; i++){
        scanf("%lld", &v[i]);

    }

    sort(v.begin(), v.end());

    if(tam%2 == 0){
        ans = (tam - 2)/2;
        for(int i=0; i< tam;i++){
            if(i%2==0){
                novo[i]=v[caro];
                caro--;
            }else{
                novo[i]=v[bar];
                bar++;
            }
        }
    }else{
        ans = (tam - 1)/2;
        for(int i=0; i< tam;i++){
            if(i%2==0){
                novo[i]=v[caro];
                caro--;
            }else{
                novo[i]=v[bar];
                bar++;
            }
        }
    }

    printf("%d\n", ans);
    for(int i=0; i<tam; i++){
        printf("%d ", novo[i]);
    }

    return 0;
}