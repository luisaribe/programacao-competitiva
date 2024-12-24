#include <bits/stdc++.h>

using namespace std;

int main (){

    int a, b, c, s;

    pair <int, int> menor;

    cin >> a >> b >> c;

    for (int i=1; i<=99; i++){
        s = abs(i-a) + abs((i-b)*(i-b)) + abs ((i-c)*(i-c)*(i-c));
        if(i==1){
            menor = make_pair(s, i);
        }else{
            if(menor.first > s){
                menor = make_pair(s, i);
            }
        }
    }

    cout << menor.second;
    
    return 0;
}