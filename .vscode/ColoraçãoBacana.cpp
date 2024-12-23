#include <bits/stdc++.h>

using namespace std;

int main (){

    long long testes, alpha, ans;
    char str[51];

    scanf("%lld", &testes);

    while(testes>0){

        scanf("%s", str);
        vector <long long> alpha(26);
        ans=0; 

        for(int i=0; i<strlen(str); i++){
            if(alpha[str[i] - 'a'] < 2){
                alpha[str[i] - 'a']++;
                    ans++;
            }
        }

            printf("%lld\n", ans/2);

        testes--;
    }

    return 0;
}