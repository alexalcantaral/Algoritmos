#include <stdio.h>
#include <conio.h>

void main(){

    char estadoCivil;

    printf("Informe o caractere do estal civil da pessoa: ");
    scanf("%c", &estadoCivil);

    switch(estadoCivil){
    case 'S': printf("Solteiro");break;
    case 'C': printf("Casado");break;
    case 'D': printf("Divorciado");break;
    case 'V': printf("Viuvo");break;
    }

    getch();
}
