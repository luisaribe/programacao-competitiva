#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    char str[102];
    
    ll testes, id=0;

    scanf("%lld", &testes);

    while(testes--){
        scanf("%s", str);
        char novo[102];
        memset(novo, '\0', 102 * sizeof(char));
        id=0;
        for(int i=strlen(str)-1; i>=0; i--){
        
            if(str[i] == 'p'){
                novo[id] = 'q';
            }else{
                if(str[i] == 'q'){
                    novo[id] = 'p';
                }else{
                    novo[id] = str[i];
                }
            }
            id++;
        }
        printf("%s\n", novo);
        
    }

    return 0;
}