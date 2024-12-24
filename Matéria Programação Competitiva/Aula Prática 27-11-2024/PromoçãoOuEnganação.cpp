#include <bits/stdc++.h>

using namespace std;

int main (){

    double unidades_regular, unidades_promo, preco_promo, r;

    scanf("%lf %lf %lf %lf", &unidades_regular, &r, &unidades_promo, &preco_promo);

    if(preco_promo / unidades_promo >= r/unidades_regular){
        printf("Enganacao\n");
    }else{
        printf("Promocao\n");
    }

    return 0;
}