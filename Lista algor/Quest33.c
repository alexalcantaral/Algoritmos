#include <stdio.h>
#include <conio.h>

void main(){

    int mario, joao, pedro;

    printf("Informe a quantidade de votos de Mario: ");
    scanf("%d", &mario);
    printf("Informe a quantidade de votos de Joao: ");
    scanf("%d", &joao);
    printf("Informe a quantidade de votos de Pedro: ");
    scanf("%d", &pedro);

    float totalVotos = mario + joao + pedro;

    float percenMario = (mario / totalVotos) * 100;
    float percenJoao = (joao / totalVotos) * 100;
    float percenPedro = (pedro / totalVotos) * 100;

    printf("\nO percentual de votos tirado por Mario foi de %.0f%%\n", percenMario);
    printf("O percentual de votos tirado por Joao foi de %.0f%%\n", percenJoao);
    printf("O percentual de votos tirado por Pedro foi de %.0f%%", percenPedro);

    getch();
}
