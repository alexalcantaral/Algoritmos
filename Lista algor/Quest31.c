#include <stdio.h>
#include <conio.h>

const int pontosAcerto = 5;
const int pontosErro = -3;
const int pontosBranco = 0;

void main(){

    int acertos, erros, branco;

    printf("Digite o numero de questoes com acertos: ");
    scanf("%d", &acertos);
    printf("Digite o numero de questoes erradas: ");
    scanf("%d", &erros);
    printf("Digite o numero de questoes em branco: ");
    scanf("%d", &branco);

    int pontosTotais = (acertos * pontosAcerto) + (erros * pontosErro) + (branco * pontosBranco);

    printf("Os pontos totais sao %d", pontosTotais);

    getch();
}
