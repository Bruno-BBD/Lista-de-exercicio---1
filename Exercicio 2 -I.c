#include <stdio.h>
#include <math.h>

int main (){

    float a, b, c;

    printf("Digite o valor de A:");
    scanf("%f", &a);
    printf("Digite o valor de B:");
    scanf("%f", &b);
    printf("Digite o valor de C:");
    scanf("%f", &c);

    float bb = b * b;
    float ac = 4*a*c;
    float delta = bb - ac;

    if(delta > 0){
            float xb = 2 * a;
            float xn = -b-sqrt(delta);
            float xnf = xn/xb;
            float xp = -b+sqrt(delta);
            float xpf = xp/xb;
            printf("As raizes da equacao sao x1:%.2f, x2:%.2f.",xnf,xpf);

    }else if(delta < 0){
        printf("A equacao nao possui raiz.");
    }else if(delta == 0){
            float xb = 2 * a;
            float xnf = -b/xb;
        printf("A equacao possui apenas uma raiz x:%.2f.",xnf);
    }

    return 0;
}
