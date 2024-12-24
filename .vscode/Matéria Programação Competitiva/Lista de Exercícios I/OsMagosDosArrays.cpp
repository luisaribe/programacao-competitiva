#include <bits/stdc++.h>

using namespace std;

int main (){

    int testes, soma, id, tam;
    
    scanf("%d", &testes);

    while(testes>0){
        soma=0;
        id=0; 
        int valor =0;
        scanf("%d", &tam);

        vector<int> vetor1(tam), vetor2(tam);
        vector<pair<int, int>> falta;  
        vector<tuple<int, int, int>> ans; 
        //first=falta e second= indice

        for(int i=0; i<tam; i++){
            scanf("%d", &vetor1[i]);
        }

        for(int i=0; i<tam; i++){
            scanf("%d", &vetor2[i]);

           int dif = vetor2[i] - vetor1[i];
            falta.push_back({dif, i});
            soma += dif;
        }


        if(soma != 0){
            printf("-1\n");
        }else{
            sort(falta.begin(), falta.end());

            int end=tam-1, beg=0;
            while(beg<end){
                if(falta[beg].first == 0){
                    beg++;
                }else{
                    if(falta[end].first == 0){
                        beg = 1;
                        end = 0;
                    }else{
                        if(abs(falta[beg].first) == abs(falta[end].first)){
                            ans.push_back({falta[beg].second, falta[end].second, abs(falta[end].first)});
                            id+=abs(falta[end].first);
                            falta[beg].first =0;
                            falta[end].first =0;
                            valor++;
                            beg++;
                            end--;
                        }else{
                            if(abs(falta[beg].first) > abs(falta[end].first)){
                                ans.push_back({falta[beg].second, falta[end].second, abs(falta[end].first)});
                                id+=abs(falta[end].first);
                                if(falta[beg].first >0){ 
                                falta[beg].first -= abs(falta[end].first);
                                }else{
                                    falta[beg].first += abs(falta[end].first);
                                }
                                falta[end].first =0;
                                valor++;
                                end--;
                            }else{
                                if(abs(falta[beg].first) < abs(falta[end].first)){
                                    ans.push_back({falta[beg].second, falta[end].second, abs(falta[beg].first)});
                                    id+=abs(falta[beg].first);
                                    if(falta[end].first >0){ 
                                    falta[end].first -= abs(falta[beg].first);
                                    }else{
                                        falta[end].first += abs(falta[beg].first);
                                    }
                                    falta[beg].first = 0;
                                    valor++;
                                    beg++;
                            }
                        }
                    }
                }
            }
        }

        printf("%d\n", id);
        for(int i=0; i<ans.size(); i++){
            while(get<2>(ans[i]) > 0){ 
            printf("%d %d\n", (get<0>(ans[i]))+1, (get<1>(ans[i]))+1);

            get<2>(ans[i]) --;
        }
        }
        }
        
        testes--;
    }

    return 0;
}