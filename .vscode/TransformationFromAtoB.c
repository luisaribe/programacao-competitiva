#include <stdio.h>

int recursao(int inicial, int final, int count){

    if(final == inicial){
        return count;
    }
    if (final < inicial){
        return 0;
    }

    if(final%2==0){
        count++;
        return recursao(inicial, final/2, count);
    }else{ 
    if((final-1)%10 ==0){
        count++;
        return recursao(inicial, (final-1)/10, count);
    }else{
        return 0;
    }
    }
}

void printar(int inicial, int final, int count){
    int v[1000000];
   while(final != inicial){
    if(final%2==0){
        v[count] = final;
        count++;
        final=final/2;
    }else{ 
    if((final-1)%10 ==0){
        v[count] = final;
        count++;
        final=(final-1)/10;
    }
    }
   }

    for(int i=count-1; i>=0; i--){
        if(i == count-1){
            printf("%d ", inicial);
        }
            if(i>0){ 
            printf("%d ", v[i]);
            }else{
                printf("%d\n", v[i]);
            }
        }
}

int main(){

    int inicial, final, p=0, ans;

    scanf("%d %d", &inicial, &final);

    ans = recursao(inicial, final, p);

    if(ans){
        printf("YES\n");
        printf("%d\n", ans+1);
        printar(inicial, final, p);
    }else{
        printf("NO\n");
    }

    return 0;
}