#include <stdio.h>
#include <conio.h>

void main() {

    int num;

    printf("informe um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O numero eh par!");
    }
    else {
        printf("O numero eh impar");
    }

    getch();
}
