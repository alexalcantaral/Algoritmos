#include <stdio.h>
#include <conio.h>

void main() {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    int sucessor = numero + 1;
    int antecessor = numero - 1;

    printf("O antecessor desse numero eh %d e o sucessor eh %d", antecessor, sucessor);
    getch();

}
