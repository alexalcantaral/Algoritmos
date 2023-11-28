#include <stdio.h>
#include <conio.h>

void main(){

    float lado1, lado2, lado3;

    printf("Informe os lados de um triangulo: ");
    scanf("%f%f%f", &lado1, &lado2, &lado3);

    if(lado1 == lado2 && lado2 == lado3){
        printf("Triangulo equilatero!");
    }
    else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
        printf("Triangulo isosceles!");
    }
    else{
        printf("Triangulo escaleno!");
    }

    getch();
}
