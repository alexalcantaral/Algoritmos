#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){

    float cateto1, cateto2;

    printf("Informe o cateto1: ");
    scanf("%f", &cateto1);
    printf("Informe o cateto2: ");
    scanf("%f", &cateto2);

    float soma = pow(cateto1,2) + pow(cateto2,2);
    float hipotenusa = sqrt(soma);

    printf("O valor da hipotenusa eh %.2f", hipotenusa);

    getch();
    }
