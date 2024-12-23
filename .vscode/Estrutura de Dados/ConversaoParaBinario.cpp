#include <bits/stdc++.h>

using namespace std;

int main (){

    int num;
    stack <int> ans;

    cin >> num;

    while(num > 0){

        ans.push(num%2);
        num/=2;

    }

    while(!ans.empty()){
        cout << ans.top();
        ans.pop();
    }

    cout << "\n";

    return 0;
}