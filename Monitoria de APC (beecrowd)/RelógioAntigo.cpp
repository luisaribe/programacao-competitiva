#include <bits/stdc++.h>

using namespace std;

int main (){

    int hora, min, horaf, minf;

    while(scanf("%d %d", &hora, &min) != EOF){
        horaf = hora/30;
        minf = min/6;

        printf("%.2d:%.2d\n", horaf, minf);
    }

    return 0;
}