#include <bits/stdc++.h>

using namespace std;

long long busca ( vector<long long>array, int n, long long query){
    int l=0;
    int r=n-1;
    int mid;
    while(l<=r){
        mid = (l+r)/2;
        if(array[mid]==query){
            return array[mid];
        }
        if(array[mid]<query){
            l=mid+1;
        }else{
            r = mid-1;
        }
    }
    return -1;
}

int main (){

    long long cases, tam, b;

    scanf("%lld", &cases);

    while(cases){
        long long qnt=0;
        b=0;
        scanf("%lld", &tam);
        vector <long long> v(tam);
        vector <long long> divisores;
        for(int i=0; i<tam;i++){
            scanf("%lld", &v[i]);
            if((tam-2)%v[i]==0){
                divisores.push_back(v[i]);
                qnt++;
            }
        }

        for(int i=0; i<qnt; i++){
            b = busca(divisores, qnt, (tam-2)/divisores[i]);
            if(b != -1){
                printf("%lld %lld\n", divisores[i], b);
                break;
            }
        }

        cases--;
    }

    return 0;
}