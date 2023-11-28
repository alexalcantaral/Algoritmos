#include <stdio.h>
#include <conio.h>

const int kgCarne = 250;

void main(){

    int pessoas;

    printf("Quantas pessoas vao participar do churrasco: ");
    scanf("%d", &pessoas);

    if(pessoas <= 3){
        int consumo = pessoas * kgCarne;
        printf("O consumo foi de %dg de carne", consumo);
    }
    else{
        float consumo = pessoas * kgCarne;
        float consumoTotal = consumo / 1000;
        printf("O consumo foi de %.3fkg de carne", consumoTotal);
    }

    getch();
}
