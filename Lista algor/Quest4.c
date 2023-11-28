#include <stdio.h>
#include <conio.h>
#include <math.h>

const int dobroN = 2;
const int triploN = 3;

void main() {

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    int dobro = numero * dobroN;
    int triplo = numero * triploN;
    int quadrado = pow(numero,2);
    int cubo = pow(numero,3);
    float raizQ = sqrt(numero);

    printf("O dobro do numero eh %d\n", dobro);
    printf("O triplo do numero eh %d\n", triplo);
    printf("O numero ao quadrado eh %d\n", quadrado);
    printf("O numero ao cubo eh %d\n", cubo);
    printf("A raiz do numero eh %.1f", raizQ);

    getch();

}
