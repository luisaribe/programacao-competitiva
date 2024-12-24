#include <bits/stdc++.h>

using namespace std;

int main (){

    char str[1002];
    int foi=0;

    scanf("%s", str);
    vector<stack<char>> pilhas;

    for(int i=0; i<strlen(str); i++){
        foi=0;
        for(int j=0; j<pilhas.size() ;j++){

            if (pilhas[j].top() >= str[i]) {
                pilhas[j].push(str[i]);  
                foi++;
                break;
            }
            
        }

         if (foi==0) {
            pilhas.push_back(stack<char>());
            pilhas.back().push(str[i]);
        }
    }

    printf("%d\n", pilhas.size());

    return 0;
}