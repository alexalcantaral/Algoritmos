#include <stdio.h>
#include <conio.h>

const float desconto = 0.1;
const float juros = 0.2;

void main(){

    float valorCompra;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    float valorAVista = valorCompra - (valorCompra * desconto);
    float valor3x = valorCompra / 3;
    float valorTotal = valorCompra + (valorCompra * juros);
    float valor10x = valorTotal / 10;

    printf("O valor dessa compra a vista eh %.2fR$\n", valorAVista);
    printf("O valor dessa compra em 3 vezes eh 3 parcelas de %.2fR$\n", valor3x);
    printf("O valor dessa compra em 10 vezes eh 10 parcelas de %.2fR$", valor10x);

    getch();
}
