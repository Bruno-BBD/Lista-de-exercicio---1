#include <stdio.h>

int main(){

    float temperaturaF;

    printf("Digite a temperatura em Fahrenheit:");
    scanf("%f",&temperaturaF);

    float temperaturaC1 = temperaturaF - 32;
    float temperaturaC2 = temperaturaC1 * 5/9;

    printf("A temperatura em Centigrado eh:%.2f", temperaturaC2);

    return 0;

}
