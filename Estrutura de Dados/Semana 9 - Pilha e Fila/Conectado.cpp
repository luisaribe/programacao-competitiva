/*
WA test 23
ta no codeforces tbm
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n;
    string aux;
    stack <string> direito;
    stack <string> esquerda;
    stack <string> baixo;
    bool flag = true;
    
    cin >> n;

    for(ll i=0; i<n*2; i++){
        cin >> aux;
        if(i<n){
            esquerda.push(aux);
            //cout << "1";
        }else{
            direito.push(aux);
            //cout << "2";
        }
    }
    aux.clear();
    while(!direito.empty()){

        if(!baixo.empty() && !direito.empty()){
            if(baixo.top() == direito.top()){
                baixo.pop();
                direito.pop();
                //cout << "R";
                aux+='R';
            }
        }

        if(!esquerda.empty() && !direito.empty()){
            if(esquerda.top() == direito.top()){ //strcmp?
                esquerda.pop();
                direito.pop();
                aux+='M';
                //cout << "M";
            }else{
                baixo.push(esquerda.top());
                esquerda.pop();
                aux+='G';
                //cout << "G";
            }
        }

        if(!baixo.empty() && !direito.empty()){
            if(baixo.top() == direito.top()){
                baixo.pop();
                direito.pop();
                //cout << "R";
                aux+='R';
            }
        }

        if(esquerda.empty() && !baixo.empty() && !direito.empty()){ 
            if( baixo.top() != direito.top()){ //strcmp?
                flag = false;
                break;
            }
        }
    }

    if(flag == true){
        cout << aux << "\n";
    }else{
        cout << "Defeito de fabrica!" << "\n";
    }

    return 0;
}