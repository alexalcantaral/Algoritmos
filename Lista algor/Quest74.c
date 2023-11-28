#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2, num3;

    printf("Informe os tres numeros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if(num1 > num2 && num1 < num3){
        printf("O numero do meio eh o %d", num1);
    }
    else if(num1 < num2 && num1 > num3){
        printf("O numero do meio eh o %d", num1);
    }
    else if(num2 > num3 && num2 < num1){
        printf("O numero do meio eh o %d", num2);
    }
    else if(num2 < num3 && num2 > num1){
        printf("O numero do meio eh o %d", num2);
    }
    else if(num3 > num2 && num3 < num1){
        printf("O numero do meio eh o %d", num3);
    }
    else if(num3 < num2 && num3 > num1){
        printf("O numero do meio eh o %d", num3);
    }

    getch();
}
