#include <stdio.h>

int main(){


    char nome[20];
    int idade;

    printf("Digite seu nome:\n");
    scanf("%s", nome);
    printf("%s digite a sua idade:\n", nome);
    scanf("%d", &idade);

    int dias = idade*365;

    printf("%s, voce possui %d dias de vida.", nome, dias);

    return 0;
}
