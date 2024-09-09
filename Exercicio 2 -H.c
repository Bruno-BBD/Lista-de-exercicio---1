#include <stdio.h>

int main(){

    float primeirot, razao, numeron;

    printf("Digite o primeiro termo da PA:");
    scanf("%f", &primeirot);
    printf("Digite a razao da PA:");
    scanf("%f", &razao);
    printf("Digite numero N da PA:");
    scanf("%f", &numeron);

    float N = numeron - 1;
    float RN = N * razao;
    float An = RN + primeirot;

    printf("O enesimo termo da sua PA eh: %.2f", An);

    return 0;

}
