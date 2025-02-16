#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int N;
    scanf("%d", &N);

    int fatoriais[10];
    for (int i = 1; i < 9; i++) {
        fatoriais[i - 1] = fatorial(i);
    }
    
    int soma = 0, cont = 0;
    for (int i = 8; i >= 0; i--) { 
        while (soma + fatoriais[i] <= N) {
            soma += fatoriais[i];
            cont++;
            if (soma == N) {
                printf("%d\n", cont);
                return 0;
            }
        }
    }
    
    return 0;
}
