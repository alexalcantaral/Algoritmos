#include <stdio.h>
#include <conio.h>

void main(){

    int golsCasa, golsVisitan;

    printf("Informe a quantidade de gols do time da casa: ");
    scanf("%d", &golsCasa);
    printf("Informe a quantidade de gols do time visitante: ");
    scanf("%d", &golsVisitan);

    if(golsCasa > golsVisitan){
        printf("O time da casa ganhou de %d a %d.", golsCasa, golsVisitan);
    }
    else if(golsCasa < golsVisitan){
        printf("O time visitante ganhou de %d a %d.", golsVisitan, golsCasa);
    }
    else{
        printf("O jogo terminou empatado.");
    }

    getch();
}
