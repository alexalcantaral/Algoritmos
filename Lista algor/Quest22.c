#include <stdio.h>
#include <conio.h>

void main(){

    int a, b;

    printf("Informe um valor a: ");
    scanf("%d", &a);
    printf("Informe um valor b: ");
    scanf("%d", &b);

    int quociente = a / b;
    int valor = quociente * b;

    printf("O maior multiplo maior ou igual a a eh %d", valor);

    getch();
}
