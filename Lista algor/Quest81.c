#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){

    int x, y, raio;

    printf("Informe o raio da circunferencia: ");
    scanf("%d", &raio);
    printf("Informe as coordenadas X e Y: \n");
    scanf("%d%d", &x, &y);

    float soma = pow(x,2) + pow(y,2);
    float distancia = sqrt(soma);

    if(raio > distancia){
        printf("O ponto esta dentro da circunferencia");
    }
    else if(raio < distancia){
        printf("O ponto esta fora da curcunferencia");
    }
    else{
        printf("O ponto esta em cima do raio da circunferencia");
    }
    getch();
}
