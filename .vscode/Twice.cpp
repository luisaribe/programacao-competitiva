#include <bits/stdc++.h>

using namespace std;

int main (){

    long long casos, tam, aux, count=0, usado=-1;
    

    scanf("%lld", &casos);

    while(casos>0){
        count=0;
        scanf("%lld", &tam);
        vector <long long> v(tam);
        for(int i=0; i<tam; i++){
            
            scanf("%lld", &v[i]);
            
        }

        sort(v.begin(), v.end());

        for(int i=1; i<tam; i++){
            if(v[i]==v[i-1]&& usado != i-1){
                count++;
                usado=i;
            }
        }

        printf("%lld\n", count);

        casos--;
    }

    return 0;
}