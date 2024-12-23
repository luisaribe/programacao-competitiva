#include <bits/stdtr1c++.h>

using namespace std;

int main (){

    int n1, n2, m, ans=0;

    scanf("%d %d %d", &m, &n1, &n2);

    for(int i=n1; i<=m; i+=n1){
        if(i%n2==0){
            ans++;
        }
    }

    printf("%d", ans);

    return 0;
}