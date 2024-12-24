#include <bits/stdc++.h>

using namespace std;

int main (){

    double num, certos=0;
    char correto[3], resp[3];


    scanf("%lf", &num);

    for(int i=0; i<num; i++){
        scanf("%s %s", correto, resp);
 
        
        if (strcmp(correto, resp) == 0){
            certos++;
        }
    
    }

    printf("Nota: %.2lf\n", certos*10/num);

    return 0;
}