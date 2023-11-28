#include <stdio.h>
#include <conio.h>

void main(){

    int mes;

    printf("Informe um mes do ano: ");
    scanf("%d", &mes);

    if(mes <= 3){
        printf("Esse mes esta no primeiro trimestre do ano.");
    }
    else if(mes <= 6){
        printf("Esse mes esta no segundo trimestre do ano.");
    }
    else if(mes <= 9){
        printf("Esse mes esta no terceiro trimestre do ano.");
    }
    else{
        printf("Esse mes esta no quarto trimestre do ano.");
    }

    getch();
}
