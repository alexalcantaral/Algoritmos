#include <stdio.h>
#include <conio.h>
const int ordem = 5;

void main(){

    int i, j;
    int mat[ordem][ordem];
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("Informe um numero inteiro: ");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("A matriz lida foi:\n");
    for(i=0; i<ordem; i++){
        for(j=0; j<ordem; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nOs numeros da diagonal principal sao:\n");
    for(i=0; i<ordem; i++){
        printf("%d ", mat[i][i]);
    }

    getch();
}
