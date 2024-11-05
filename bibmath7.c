#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int dia;

    printf("Digite um numero de 1 a 7 para representar um dia da semana..: ");
    scanf("%d", &dia);

    switch (dia){
    
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Numero Invalido\n");
        break;
    }


    printf("Fim do programa!\n");

    return 0;
} 