#include <stdio.h>
#include <conio.h>

const float valorDiaria = 120;

void main(){

    int pedreiro, servente;

    printf("Informe a quantidade de pedreiros que teve na obra: ");
    scanf("%d", &pedreiro);
    printf("Informe a quantidade de serventes que teve na obra: ");
    scanf("%d", &servente);

    float custoPerdreiro = pedreiro * valorDiaria;
    float custoServente = servente * (valorDiaria / 2);

    float valorFinal = (custoPerdreiro + custoServente) * 180;

    printf("O valor final da mao de obra da obra feita por Lazaro foi de %.2f", valorFinal);

    getch();
}
