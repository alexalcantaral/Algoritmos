#include <stdio.h>
#include <conio.h>

void main(){

    int horas, minutos, fusoHorario;

    printf("Informe as horas: ");
    scanf("%d", &horas);
    printf("Informe os minutos: ");
    scanf("%d", &minutos);
    printf("Informe o fuso horario: ");
    scanf("%d", &fusoHorario);

    if(horas <= 23 && minutos <= 59){
        int horasFuso = horas + fusoHorario;
        if(horasFuso > 23){
            int horasFusoFinal = horasFuso - 20 - fusoHorario;
            printf("O horario final com fuso horario eh de %d:%d", horasFusoFinal, minutos);
        }
        else if(fusoHorario < 0){
            int horasFusoFinal = horas + fusoHorario;
            printf("O horario final com fuso horario eh de %d:%d", horasFusoFinal, minutos);
        }
        else if(horas > 0){
            int horasFusoFinal = horas + fusoHorario;
            printf("O horario final com fuso horario eh de %d:%d", horasFusoFinal, minutos);
        }
        else{
            printf("O horario final sem fuso horario eh de %d:%d", horas, minutos);
        }
    }
    else{
        printf("Nao existe esse horario correspondente!");
    }
    getch();
}
