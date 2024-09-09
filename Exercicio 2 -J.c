#include <stdio.h>

int main(){

    int n1, n10, n50, n100;

    printf("Digite a quantidade de moedas de 1 real:");
    scanf("%d",&n1);
    printf("Digite a quantidade de notas de 10 reais:");
    scanf("%d",&n10);
    printf("Digite a quantidade de notas de 50 reais:");
    scanf("%d",&n50);
    printf("Digite a quantidade de notas de 100 reais:");
    scanf("%d",&n100);

    int n10f = n10 * 10;
    int n50f = n50 * 50;
    int n100f = n100 * 100;
    int resultado = n1 + n10f + n50f + n100f;

    printf("O valor total em dinheiro eh: %dReais.", resultado);

    return 0;
}
