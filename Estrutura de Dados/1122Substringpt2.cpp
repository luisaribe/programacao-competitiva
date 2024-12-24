#include <bits/stdc++.h>

using namespace std;

int main (){

    int tam, atual=1, duplinhas=0, ans;

    scanf("%d", &tam);
    vector <int> v (tam);
    vector <int> numeros (10, 0);
    vector <int> maiores (tam);

    for(int i=0; i<tam; i++){
        scanf("%d", &v[i]);

        numeros[v[i]]++;
        if(i>0 && v[i]==v[i-1]){

            atual++;

            if(atual==2){
                duplinhas++;
            }
            if(atual > 2 || (atual == 2 && numeros[v[i]] > 2)){
                maiores.push_back(duplinhas*2);
                vector <int> numeros (10, 0);
                numeros[v[i]]=2;
                duplinhas=1;
            }else{
                if(atual < 2 && numeros[v[i]] > 2){
                    maiores.push_back(duplinhas*2);
                    vector <int> numeros (10, 0);
                    numeros[v[i]]++;
                    duplinhas=0;
                }
                
            }
        }else{
            if(i>0){
                if(i>1 && v[i]!=v[i-1] && v[i-1]!=v[i-2]){
                    maiores.push_back(duplinhas*2);
                    vector <int> numeros (10, 0); 
                    numeros[v[i]]++;
                    duplinhas=0;
                }
                atual = 1;
            }
        }
    }

    maiores.push_back(duplinhas*2);

    sort(maiores.begin(), maiores.end(), greater<int>());
    ans=0;
    if(!maiores.empty()){
        ans=maiores[0];
    }

    printf("%d\n", ans);

    return 0;
}