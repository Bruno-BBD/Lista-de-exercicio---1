#include <stdio.h>

int main(){

    float altura, largura;

    printf("Digite a largura da parede em metros:");
    scanf("%f", &largura);
    printf("Digite a altura da parede em metros:");
    scanf("%f", &altura);

    float m2 = altura * largura;

    int consumo = 300;
    float nescessarioml = m2 * consumo;
    int lata = 2000;
    float totallatas = nescessarioml / lata;

    printf("Voce vai prescisar de %0.2f latas de tinta." ,totallatas);

    return 0;


}
