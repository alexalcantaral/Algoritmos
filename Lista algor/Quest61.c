#include <stdio.h>
#include <conio.h>

void main(){

    int num;

    printf("Informe um valor: ");
    scanf("%d", &num);

    if(num < 0){
        int valorAbs = num * (-1);
        printf("O valor absoluto desse numero eh %d", valorAbs);
    }
    else{
        printf("O valor absoluto desse numero eh %d", num);
    }

    getch();
}
