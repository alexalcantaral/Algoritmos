#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2, num3;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    int menor = num1;
    int maior = num1;

    if(num2 < menor){
        menor = num2;
    }
    else if(num2 > maior){
        maior = num2;
    }

    if(num3 < menor){
        menor = num3;
    }
    else if(num3 > maior){
        maior = num3;
    }

    printf("O menor numero eh: %d\n", menor);
    printf("O maior numero eh: %d\n", maior);

    getch();
}
