#include <stdio.h>
#include <conio.h>

void main(){

    float gasolina, alcool;

    printf("Informe o preco da gasolina: ");
    scanf("%f", &gasolina);
    printf("Informe o preco do alcool: ");
    scanf("%f", &alcool);

    float valorAtualG = gasolina * 0.7;

    if(valorAtualG > alcool){
        printf("Abasteca com alcool!");
    }
    else{
        printf("Abasteca com gasolina!");
    }

    getch();
}
