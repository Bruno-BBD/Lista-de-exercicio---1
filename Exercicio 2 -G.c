#include <stdio.h>

int main(){

    float pressao, volume, temperatura;

    printf("Digite a pressao do pneu:");
    scanf("%f", &pressao);
    printf("Digite o volume do pneu:");
    scanf("%f", &volume);
    printf("Digite a temperatura do pneu:");
    scanf("%f", &temperatura);

    float temp = temperatura + 460;
    float PV = pressao * volume;
    float M = temp * 0.37;
    float massa = PV / M;

    printf("A massa do ar deste pneu eh %.4f.", massa);

    return 0;

}
