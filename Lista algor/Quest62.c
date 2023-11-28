#include <stdio.h>
#include <conio.h>

void main(){

    int m, n;

    printf("Digite um numero para M: ");
    scanf("%d", &n);
    printf("Digite um numero para N: ");
    scanf("%d", &n);

    if(m % n == 0){
        printf("O N eh multiplo do M");
    }
    else{
        printf("O N nao eh multiplo do M");
    }

    getch();
}
