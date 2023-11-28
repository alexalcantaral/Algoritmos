#include <stdio.h>
#include <conio.h>

const float valorMt2 = 300.00;

void main() {

    float largura, comprimento;

    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    float metroQuad = largura * comprimento;
    float valorMerc = metroQuad * valorMt2;

    printf("O valor de mercado do terreno eh %.2f", valorMerc);
    getch();

}
