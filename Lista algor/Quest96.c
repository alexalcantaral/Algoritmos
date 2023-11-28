#include <stdio.h>
#include <conio.h>

void main(){

    int numero, maior, segundoMaior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &maior);
    segundoMaior = maior;

    printf("Digite o segundo numero: ");
    scanf("%d", &numero);

    if (numero > maior) {
        segundoMaior = maior;
        maior = numero;
    } else if (numero < maior) {
        segundoMaior = numero;
    }

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero);

    if (numero > maior) {
        segundoMaior = maior;
        maior = numero;
    } else if (numero < maior && numero > segundoMaior) {
        segundoMaior = numero;
    }

    printf("Digite o quarto numero: ");
    scanf("%d", &numero);

    if (numero > maior) {
        segundoMaior = maior;
        maior = numero;
    } else if (numero < maior && numero > segundoMaior) {
        segundoMaior = numero;
    }

    printf("Digite o quinto numero: ");
    scanf("%d", &numero);

    if (numero > maior) {
        segundoMaior = maior;
        maior = numero;
    } else if (numero < maior && numero > segundoMaior) {
        segundoMaior = numero;
    }

    printf("O segundo maior numero eh: %d\n", segundoMaior);

    getch();
}
