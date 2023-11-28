#include <stdio.h>
#include <conio.h>

void main() {

    int num1, num2, num3;

    printf("Digite tres numeros inteiros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    float soma = num1 + num2 + num3;
    float media = soma / 3;

    printf("A media aritmetica eh %.1f", media);
    getch();

}
