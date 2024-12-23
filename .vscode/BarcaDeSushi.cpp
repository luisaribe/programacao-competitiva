#include <bits/stdc++.h>

using namespace std;

int main (){

    long long tam, maior_seg=0, seg=0, count1=0, count2=0;

    scanf("%lld", &tam);
    vector <long long> v(tam);

    for(int i=0; i<tam; i++){
        scanf("%lld", &v[i]);

        if(v[i] != v[i-1] && i>0){
            if(count1>count2){
                seg=2*count2;
            }else{
                seg=2*count1;
            }
            
            if(seg>maior_seg){
                maior_seg=seg;
            }

            if(v[i] == 1){
            count1=1;
        }else{
            count2=1;
        }
        }else{ 
        if(v[i] == 1){
            count1++;
        }else{
            count2++;
        }
        }

        
    }

    if(count1>count2){
                seg=2*count2;
            }else{
                seg=2*count1;
            }
            
            if(seg>maior_seg){
                maior_seg=seg;
            }

            printf("%lld", maior_seg);

    return 0;
}