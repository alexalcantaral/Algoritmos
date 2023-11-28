#include <stdio.h>
#include <conio.h>

void main(){

    int valor;

    printf("Informe o valor que vai ser sacado pelo usuario de ate 1000 reais: ");
    scanf("%d", &valor);

    if(valor <= 1000){
        int notas1 = valor / 100;
        int resto1 = valor % 100;
        int notas2 = resto1 / 50;
        int resto2 = resto1 % 50;
        int notas3 = resto2 / 20;
        int resto3 = resto2 % 20;
        int notas4 = resto3 / 10;
        int resto4 = resto3 % 10;

        printf("O valor %d foi recebido em %d notas de 100, %d notas de 50, %d notas de 20 e %d notas de 10.", valor, notas1, notas2, notas3, notas4);
    }
    else{
        printf("O valor nao pode ser sacado!");
    }

    getch();
}
