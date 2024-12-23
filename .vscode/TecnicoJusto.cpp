#include <bits/stdc++.h>

using namespace std;

int main (){

    int casos, tam, menor;

    scanf("%d", &casos);

    while(casos>0){

        scanf("%d", &tam);
        vector <int> v(tam);

        for(int i=0; i<tam; i++){
            scanf("%d", &v[i]);
        }

        sort(v.begin(), v.end());

        for(int i=1; i<tam; i++){
            if(i==1){
                menor = v[1] - v[0];
            }else{
                if(v[i] - v[i-1] < menor){
                    menor = v[i] - v[i-1];
                }
            }
        }

        printf("%d\n", menor);

        casos--;
    }

    return 0;
}