#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2;

    printf("Informe um numero: ");
    scanf("%d", &num1);
    printf("Informe um segundo numero: ");
    scanf("%d", &num2);

    if(num2 > num1) {
        printf("O segundo numero eh maior que o primeiro.");
    }
    else if(num2 < num1) {
        printf("O segundo numero eh menor que o primeiro.");
    }
    else {
        printf("Os numeros sao iguais.");
    }

    getch();
}
