#include <stdio.h>
#include <conio.h>

void main() {

    int idade;

    printf("Informe a idade: ");
    scanf("%d", &idade);

    if(idade <= 12){
        printf("%d eh idade de crianca.", idade);
    }
    else if(idade >= 13 && idade <= 17){
        printf("%d eh idade de adolecente.", idade);
    }
    else if(idade >= 18 && idade <= 59){
        printf("%d eh idade de adulto.", idade);
    }
    else{
         printf("%d eh idade de idoso.", idade);
    }

    getch();
}
