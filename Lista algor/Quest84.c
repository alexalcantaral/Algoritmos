#include <stdio.h>
#include <conio.h>
#include <math.h>

void main(){

    float peso, altura;

    printf("Informe o peso: ");
    scanf("%f", &peso);
    printf("Informe a altura: ");
    scanf("%f", &altura);

    float imc = peso / pow(altura,2);

    if(imc < 18){
        printf("A pessoa esta abaixo do peso ideal!\n");
        float pesoIdealMin = 18 * pow(altura,2);
        float pesoGanhar = pesoIdealMin - peso;
        printf("Voce precisa ganhar %.2f kg para atingir o peso ideal.\n", pesoGanhar);
    }
    else if(imc > 25){
        printf("A pessoa esta acima do peso ideal!\n");
        float pesoIdealMax = 25 * pow(altura,2);
        float pesoPerder = peso - pesoIdealMax;
        printf("Voce precisa perder %.2f kg para atingir o peso ideal.\n", pesoPerder);
    }
    else{
        printf("A pessoa esta na faixa de peso ideal!");
    }

    getch();
}
