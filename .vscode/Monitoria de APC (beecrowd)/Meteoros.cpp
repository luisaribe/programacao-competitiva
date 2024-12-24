#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main (){
    
    int x1, y1, x2, y2, testes, x, y, ans, n=0;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    while(x1 !=0 && y1 != 0 && x2 != 0 && y2 != 0){
        scanf("%d", &testes);
        ans=0;
        n++;
        while(testes--){
            scanf("%d %d", &x, &y);
            if(x >= x1 && x <= x2 && y >= y2 && y<= y1){
                ans++;
            }
        }

       printf("Teste %d\n%d\n", n, ans);
       scanf("%d %d %d %d", &x1, &y1, &x2, &y2); 
    }

    return 0;
}