#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {

    float lado;

    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float area = pow(lado,2);
    float perimetro = 4 * lado;

    printf("A area do quadrado eh %.2f e o perimetro eh %.2f", area, perimetro);
    getch();

}
