
int msb(long long n) {
    int i = 0;
    while (n > 0) {
        n >>= 1;  // Desloca os bits para a direita
        i++;      // Conta a posição do bit
    }
    return i - 1;  // Devolve a posição do MSB
}

/*
usei em um problema que tinha que inverter os bits, porque queria o maior xor de um intervalo 
de zero a um valor n
ex: 8
1000
saida: 8 e 7
pois 8^7:
1000
0111
1111

portanto criei a função de inverter
*/

long long inverter(long long n) {
    // Encontre a posição do MSB
    int msb_pos = msb(n);
    
    // Crie uma máscara com 1s até o MSB
    long long mascara = (1LL << (msb_pos + 1)) - 1;
    
    // Inverta os bits de n até o MSB usando XOR
    return n ^ mascara;
}

/*
criação de mascaras: 
*/
long long mascara = (1LL << (msb_pos + 1)) - 1;
/*
a mascara sera criar um numero com bits 1 do tamanho dos bits do outro numero
para isso,
coloca-se o 1 na posição de msb+1 com 1LL << (msb_pos+1)
para
se tiver msb=4
ficar com 
10000
e subtrair 1
para resultar em 01111
assim, se quisermos "inverter" o numero 8 em binario 1000, podemos fazer o seu xor 
com essa mascara 
1000
1111
0111
*/