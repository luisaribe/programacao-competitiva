#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes;
    string str;
    string nova;
    stack <char> maiusculas;
    stack <char> minusculas;
    stack <char> pilhona;
    char a;

    cin >> testes;

    while(testes--){
        cin >> str;
        nova.clear();

        for(int i=0; i<str.size(); i++){
            a = str[i];
            if(str[i] == 'b'){
                if(!minusculas.empty()){
                    minusculas.pop();
                }
            }else{
                if(str[i] == 'B'){
                    if(!maiusculas.empty()){
                        maiusculas.pop();
                    }
                }else{
                    if(str[i] >= 'A' && str[i] <= 'Z'){
                        maiusculas.push(a);
                    }else{
                        minusculas.push(a);
                    }
                }
            }
        }

        for(int i=str.size()-1; i>=0; i--){
            if(str[i] >= 'a' && str[i] <= 'z'){ 
            if(!minusculas.empty()){ 
                if(str[i] == minusculas.top()){
                    pilhona.push(minusculas.top());
                    minusculas.pop();
                }
            }
            }
            if(str[i] >= 'A' && str[i] <= 'Z'){ 
            if(!maiusculas.empty()){
                if(str[i] == maiusculas.top()){
                    pilhona.push(maiusculas.top());
                    maiusculas.pop();
                }
            }
            }
        }

        while(!pilhona.empty()){
            nova+=pilhona.top();
            pilhona.pop();
        }

        cout << nova << "\n";
    }


    return 0;
}