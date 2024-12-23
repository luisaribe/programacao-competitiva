#include <bits/stdc++.h>
 
using namespace std;

int main (){
 
    long long tam, abre=0, fecha=0, fecha_antes=0;
    char str[200002];
 
    scanf("%lld", &tam);
    scanf("%s", str);
 
    if(tam%2!=0){
        abre=2;
    }else{

        
        for(int i=0; i<tam; i++){

            if(str[i]== '('){
                abre++;
                //printf("%d", i);
            }else{
                if(abre){ 
                fecha++;
                }else{
                    fecha_antes++;
                }
            }
        }

    }
 
        if((abre == fecha+1 && fecha_antes==1) || (fecha == abre)|| tam==0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
 
 
    return 0;
}