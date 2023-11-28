#include <stdio.h>
#include <conio.h>

void main(){

    int num1, num2, resultado;
    char operador;

    printf("Informe o operado que vai ser utilizado na operacao: ");
    scanf("%c", &operador);
    printf("Informe os dois numeros da operacao: \n");
    scanf("%d%d", &num1, &num2);

    switch(operador){
    case '+': resultado = num1 + num2;
        printf("O resultado eh %d", resultado);break;
    case '-': resultado = num1 - num2;
        printf("O resultado eh %d", resultado);break;
    case '*': resultado = num1 * num2;
        printf("O resultado eh %d", resultado);break;
    case '/': resultado = num1 / num2;
    if(num2 > 0){
        printf("O resultado eh %d", resultado);
    }
    else{
        printf("O segundo numero nao pode ser 0!!");break;
    }
    }

    getch();
}
