#include <stdio.h>
#include <conio.h>

void main() {

    float celsius;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    float fahrenheit = celsius * 1.8 + 32;
    float kelvin = celsius + 273;

    printf("Essa mesma temperatura em fahrenheit eh %.0f\n", fahrenheit);
    printf("Essa mesma temperatura em kelvin eh %.0f", kelvin);
    getch();
}
