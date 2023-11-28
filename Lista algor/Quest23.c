#include <stdio.h>
#include <conio.h>

const float PI = 3.14;

void main(){

    float raio;

    printf("Informe o valor do raio da esfera: ");
    scanf("%f", &raio);

    float volume = (4 * PI * pow(raio,3)) / 3;

    printf("O volume da esfera eh %.1f", volume);

    getch();
}
