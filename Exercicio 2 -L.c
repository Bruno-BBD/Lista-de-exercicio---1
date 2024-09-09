#include <stdio.h>

int main(){

    int valor, notas100, notas50, notas10, notas5, moedas1;

    printf("Informe o valor total desconsiderando o centavos em reais:");
    scanf("%d",&valor);

    notas100 = valor / 100;
    valor = valor % 100;
    notas50 = valor / 50;
    valor = valor % 50;
    notas10 = valor / 10;
    valor = valor % 10;
    notas5 = valor / 5;
    valor = valor % 5;
    moedas1 = valor;

    printf("O numero de notas de 100 reais eh:%d.\n",notas100);
    printf("O numero de notas de 50 reais eh:%d.\n",notas50);
    printf("O numero de notas de 10 reais eh:%d.\n",notas10);
    printf("O numero de notas de 5 reais eh:%d.\n",notas5);
    printf("O numero de moedas de 1 real eh:%d.\n",moedas1);

    return 0;
}

