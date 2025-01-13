/*

int isValid(char* s) {
    Stack* pilha = createStack();
    for(int i=0; i<strlen(s); i++){
        if(!isEmpty(pilha)){
            char n = peek(pilha);
            if(n == '(' && s[i] == ')'){
                pop(pilha);
            }else{
                if(n == '[' && s[i] == ']'){
                    pop(pilha);
                }else{
                    if(n == '{' && s[i] == '}'){
                        pop(pilha);
                    }else{
                        push(pilha, s[i]);
                    }
                }
            }
        }else{
           push(pilha, s[i]); 
        }
    }
    if(isEmpty(pilha)){
        return 1;
    }else{
        return 0;
    }
}*/