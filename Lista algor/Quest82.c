#include <stdio.h>
#include <conio.h>

void main(){

    float nota1, nota2, nota3;

    printf("Informe as tres notas do aluno: \n");
    scanf("%f%f%f", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    if(media < 4){
        printf("O aluno esta reprovado! Com media %.1f.", media);
    }
    else if(media < 7){
        printf("O aluno esta na final! Com media %.1f.\n", media);
        float notaFinal = (25 - (3 * media)) / 2;
        printf("O aluno vai precisar de %.1f para ser aprovado na final.", notaFinal);
    }
    else{
        printf("O aluno foi aprovado! Com media %.1f.", media);
    }

    getch();
}
