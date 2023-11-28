#include <stdio.h>
#include <conio.h>

void main(){

    int ano;

    printf("Informe um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0){
        printf("O ano eh bissexto!");
    }
    else{
        printf("O ano nao eh bissexto!");
    }

    getch();
}
