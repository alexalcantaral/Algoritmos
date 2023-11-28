#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){

    char palavra[30];

    printf("Informe uma palavra: ");
    gets(palavra);

    int numero = strlen(palavra);
    printf("A palavra %s tem %d caracteres!", palavra, numero);

    getch();
}
