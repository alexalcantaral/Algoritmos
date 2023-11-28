#include <stdio.h>
#include <conio.h>

void main(){

    float salarioBruto;

    printf("Informe o salario bruto do colaborador: ");
    scanf("%f", &salarioBruto);

    float salarioLiq = salarioBruto - (salarioBruto * 0.11);

    if(salarioLiq <= 1903.98){
        printf("O colaborador esta isento do desconto do imposto de renda e recebera %.2fR$", salarioLiq);
    }
    else if(salarioLiq <= 2826.65){
        float salarioLiqFinal = salarioLiq - (salarioLiq * 0.075);
        printf("O colaborador tem um desconto de 7,5 de imposto de renda e recebera %.2fR$", salarioLiqFinal);
    }
    else if(salarioLiq <= 3751.05){
        float salarioLiqFinal = salarioLiq - (salarioLiq * 0.15);
        printf("O colaborador tem um desconto de 15 de imposto de renda e recebera %.2fR$", salarioLiqFinal);
    }
    else if(salarioLiq <= 4664.68){
        float salarioLiqFinal = salarioLiq - (salarioLiq * 0.225);
        printf("O colaborador tem um desconto de 22,5 de imposto de renda e recebera %.2fR$", salarioLiqFinal);
    }
    else{
        float salarioLiqFinal = salarioLiq - (salarioLiq * 0.275);
        printf("O colaborador tem um desconto de 27,5 de imposto de renda e recebera %.2fR$", salarioLiqFinal);
    }

    getch();
}
