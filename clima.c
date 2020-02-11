//
// Created by aluno on 11/02/2020.
//

#include <stdio.h>

int f_subindo(int t){

    switch (t) {
        case 1:
            printf("Tempo bom , ventos quento e seco");
            break;

        case 2:
            printf("Tempo bom , ventos de leste frescos");
            break;

        case 3:
            printf("Tempo bom , ventos de sul a sudeste");
            break;

    }
}

int f_estacionario(int t){
    switch (t) {
        case 1:
            printf("Tempo mundando para bom , ventos de leste");
            break;

        case 2:
            printf("Tempo incerto, ventos variaveis");
            break;

        case 3:
            printf("Chuva provavel, ventos de sul a sudeste");
            break;
    }
}

int f_baixando(int t){
    switch (t) {
        case 1:
            printf("Tempo instavel, aproximação de frente");
            break;

        case 2:
            printf("Frente quente com chuvas provaveis");
            break;

        case 3:
            printf("chuvas abundantes e ventos de sul a sudoeste fortes");
            break;
    }
}


int main() {
    int barometro, termometro;


    printf("Dados do barometro\n1-subindo\n2-estacionario\n3-baixando\n->");
    scanf("%d",&barometro);

    printf("Dados do termometro\n1-subindo\n2-estacionario\n3-baixando\n->");
    scanf("%d",&termometro);

    switch (barometro) {
        case 1 :
            f_subindo(termometro);
            break;
        case 2 :
            f_estacionario(termometro);
            break;
        case 3 :
            f_baixando(termometro);
            break;
    }

    return 0;
}