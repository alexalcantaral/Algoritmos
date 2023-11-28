#include <stdio.h>
#include <conio.h>

void main(){

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    if(num > 0) {
        printf("O numero eh positivo");
    }
    else if(num < 0) {
        printf("O numero eh negativo");
    }
    else {
        printf("O numero eh neutro");
    }

    getch();
}
