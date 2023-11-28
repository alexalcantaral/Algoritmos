#include <stdio.h>
#include <conio.h>

void main(){

    int numVoto;

    printf("Informe o numero do candidato a deputado estadual: ");
    scanf("%d", &numVoto);

    int numPartido = numVoto / 1000;

    switch(numPartido){
    case 13: printf("O partido do candidato eh o PT"); break;
    case 14: printf("O partido do candidato eh o PTB"); break;
    case 15: printf("O partido do candidato eh o PMDB"); break;
    case 25: printf("O partido do candidato eh o DEM"); break;
    case 45: printf("O partido do candidato eh o PSDB"); break;
    case 65: printf("O partido do candidato eh o PCdoB"); break;
    default: printf("Nao existe esse partido!");
    }

    getch();
}
