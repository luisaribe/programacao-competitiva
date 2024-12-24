#include <bits/stdc++.h>

using namespace std;

int main (){

    int tam, anterior=0, atual=1, ans;

    scanf("%d", &tam);
    vector <int> v (tam);
    vector <int> quantias (tam);

    for(int i=0; i<tam; i++){
        scanf("%d", &v[i]);
        /*if(i> 0 && v[i] == v[i-1]){
            atual++;
            //printf("if 1 %d\n", i);
        }else{
            if(i>0){
                
                    if(anterior > atual){
                        quantias.push_back(atual * 2);
                    }else{
                        quantias.push_back(anterior * 2);
                    }
                
                anterior = atual;
                atual=1;
                //printf("if %d\n", i);
            }
        }*/
    }

    /*if(anterior > atual){
                        quantias.push_back(atual * 2);
                    }else{
                        quantias.push_back(anterior * 2);
                    }*/

    for(int i=0; i<tam; i++){
        if(i>0){
            if(v[i] == v[i-1])
        }
    }

    sort(quantias.begin(), quantias.end(), greater<int>());
    ans=quantias[0];
    if(quantias.empty()){
        ans=0;
    }

    printf("%d\n", ans);

    return 0;
}