/* wa */

#include <bits/stdc++.h>

using namespace std;

int main (){

    long long tam, testes, maior_sum=0;

    scanf("%lld", &testes);

    while(testes--){
        maior_sum=0;

        scanf("%lld", &tam);
        vector<long long>v(tam);

        for(int i=0; i<tam; i++){
            scanf("%lld", &v[i]);

                maior_sum+=v[i]; 
                printf(" id: %d maior sum:%d\n", i, maior_sum);
            
            if(i>0 && maior_sum - 2*v[i-1] - 2*v[i] > maior_sum){
                
                maior_sum= maior_sum -(2*v[i-1]) - 2*v[i];
                printf("no if id: %d maior sum:%d\n", i, maior_sum);
                v[i-1]= -v[i-1];
                v[i]= -v[i];
            }

                if(i>0 && maior_sum - 2*v[i-2] -2*v[i] > maior_sum){
                    maior_sum= maior_sum - 2*v[i-2] -2*v[i];
                    v[i-2]= -v[i-2];
                    v[i] = -v[i];
                }
            
        }

        printf("%lld\n", maior_sum);
    }

    return 0;
}

/*

1
7
2 -7 6 0 8 6 -4

=33
*/