#include <stdio.h>
#include <conio.h>

const float mediaPorL = 14;

void main(){

    int valorDist;
    float precoCombus;

    printf("Informe o valor da distancia que Joao vai percorrer: ");
    scanf("%d", &valorDist);
    printf("Informe o preco atual do combustivel: ");
    scanf("%f", &precoCombus);

    float consumoCombus = (valorDist / mediaPorL) * precoCombus;

    printf("O consumo de combustivel dessa viagem foi de %.2f", consumoCombus);

    getch();
}
