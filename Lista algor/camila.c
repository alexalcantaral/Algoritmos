#include <stdio.h>
#include <conio.h>

void main(){

    int quant;

    printf("Informe o quanto voce ama Alex Alcantara: ");
    scanf("%d", &quant);

    if(quant < 10){
        printf("Voce ama muito pouco o seu namorado!!!! Comece a amar mais!!!");
    }
    else if(quant < 100){
        printf("Eu ainda acho que vc ama ele muito pouco!!");
    }
    else if(quant < 1000){
        printf("Ainda esta pouco, mas comecando a melhorar.");
    }
    else if(quant < 10000){
        printf("Esta bom, mas pode melhorar");
    }
    else if(quant < 100000){
        printf("Eu te amo minha vida, mas vc ainda pode me amar ainda mais para tentar me alcancar");
    }
    else if(quant < 1000000){
        printf("Eu te amo muito e para sempre, mas ainda nao me ama igual!!");
    }
    else{
        printf("Voce nunca vai amar Alex Alcantara assim como ele te ama, mas obrigado por me amar tanto, seu amor me faz bem e feliz sempre!!!");
    }

    getch();
}
