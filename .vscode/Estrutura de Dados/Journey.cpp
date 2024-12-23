/*
Problem B div.3 

22/12/24

accepted :)
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll testes, total, n1, n2, n3, id=0, conta=0, aux, resta;

    cin >> testes;

    while(testes--){
        cin >> total >> n1 >> n2 >> n3;
        id=0, conta=0;

        aux = n1+n2+n3;
        if(total%aux == 0){
            id=3*(total/aux);
            //cout << id << "\n";
        }else{
            if(aux > total){
                if(n1>=total){
                    id=1;
                }else{
                    if(n2+n1 >= total){
                        id=2;
                    }else{
                        id=3;
                    }
                }
            }else{
                resta = (total - (total/aux) * aux);
                id+=(3*(total/aux));
                if(n1>=resta){
                    id+=1;
                }else{
                    if((n2+n1) >= resta){
                        id+=2;
                    }else{
                        id+=3;
                    }
                }
            }
        }
        /* 
        while(conta < total){ 
          
        if((conta+(n1+n2+n3))<= total){
            conta+=(n1+n2+n3);
            //cout << "1 " << id << conta << "\n";
            id+=3;
        }else{
            if((conta+n1) >= total){
                conta+=n1;
                id+=1;
                //cout << "2 " << id << "\n";
            }else{
                if((conta+(n1+n2)) >= total){
                    conta+=(n1+n2);
                    id+=2;
                    //cout << "3 " << id << "\n";
                }else{
                    conta+=(n1+n2+n3);
                    id+=3;
                }
            }
        }
        }*/

        cout << id << "\n";
    }
    
    return 0;
}