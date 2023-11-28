#include <stdio.h>
#include <conio.h>

void main() {

    float base, altura;

    printf("Digite o valor da base de um triangulo: ");
    scanf("%f", &base);
    printf("Digite o valor da altura de um triangulo: ");
    scanf("%f", &altura);

    float area = base * altura / 2;

    printf("A area do triangulo eh %.2f", area);
    getch();

}
