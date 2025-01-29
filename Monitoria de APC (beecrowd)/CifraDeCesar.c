#include <stdio.h>
#include <string.h>

int main(){

    char str[52];
    int n, t;
    
    scanf("%d", &t);

    while(t--){
    scanf("%s %d", str, &n);

    size_t len = strlen(str);
    for(size_t i=0; i<len; i++){
        str[i]=str[i]-n;
        if(str[i]<'A'){
            str[i]='Z'+1 -('A'-str[i]);
        }
    }

    printf("%s\n", str);
    }
}