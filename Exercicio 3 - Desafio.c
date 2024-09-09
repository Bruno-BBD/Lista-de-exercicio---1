#include <stdio.h>

int main(){

    int vi1, vi2, vi3;

    printf("Acoes disponiveis: \nAcao 1: 24,13/unidade. \nAcao 2: 11/unidade. \nAcao 3: 18,65/unidade.\n");

    printf("Digite o valor que deseja investir na acao 1: \n");
    scanf("%d", &vi1);

    printf("Digite o valor que deseja investir na acao 2: \n");
    scanf("%d", &vi2);

    printf("Digite o valor que deseja investir na acao 3: \n");
    scanf("%d", &vi3);

    int u1 = vi1/24.13;
    int u2 = vi2/11;
    int u3 = vi3/18.65;

    printf("Voce vai comprar %d unidades da acao 1, %d unidades da acao 2, %d unidades da acao 3.\n\n", u1, u2, u3);

    int total = (u1 * 24.13) + (u2 * 11) + (u3 * 18.65);

    if (total > 1000.00) {

        printf("O valor total gasto R$ %d excede o aporte de R$ 1000.00.\n", total);
        return 1;
    }

    float dv1 = (17/24.13)*100;
    float dv2 = (35/11)*100;
    float dv3 = (25/38.65)*100;

    printf("\nO dividend yield de cada acao eh: \nAcao1: %.2f;\nAcao2: %.2f;\nAcao3: %.2f.", dv1, dv2, dv3);

    return 0;

}
