#include <stdio.h>

int main(){

    float raio;

    printf("Digite o raio do circulo:");
    scanf("%f", &raio);

    float area = 3.14 * (raio*raio);

    printf("A area do seu circulo eh de:%.2f", area);

    return 0;

}
