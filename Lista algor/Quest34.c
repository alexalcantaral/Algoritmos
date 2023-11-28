#include <stdio.h>
#include <conio.h>

const int mes = 30;

void main(){

    int diaCompra, prazoEntrega;

    printf("Informe o dia do mes que foi feito a compra: ");
    scanf("%d", &diaCompra);
    printf("Informe o prazo dado pelo vendedor para ser feito a entrega: ");
    scanf("%d", &prazoEntrega);

    int recebimento = (diaCompra + prazoEntrega - 1) % mes + 1;

    printf("A entrega deve ser feita no dia %d", recebimento);

    getch();
}
