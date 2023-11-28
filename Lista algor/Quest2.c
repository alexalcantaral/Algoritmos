#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2, num3, peso1, peso2, peso3;

    printf("Informe tres numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    printf("Informe os tres pesos: \n");
    scanf("%d%d%d", &peso1, &peso2, &peso3);

    float mediaPond = (num1*peso1 + num2*peso2 + num3*peso3) / (num1+num2+num3);

    printf("A media ponderada eh %.1f.", mediaPond);

    getch();
}
