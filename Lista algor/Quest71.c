#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2, num3;

    printf("Informe os tres numeros: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("O numero %d eh o maior", num1);
    }
    else if(num2 > num1 && num2 > num3){
        printf("O numero %d eh o maior", num2);
    }
    else{
        printf("O numero %d eh o maior", num3);
    }

    getch();
}
