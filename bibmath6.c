#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    float nota1, nota2, media;

    printf("Digite uma nota.......: ");
    scanf("%f", &nota1);

    printf("Digite outra nota.....: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    //desvio condicional simples
    if (media >= 70){
       printf("Aprovado\n");
    }
    else if (media >= 40){
        printf("Exame\n");
    }
    else
        printf("Reprovado\n");

    printf("A media foi de..: %.2f\n ", media);


    printf("Fim do programa!\n");

    return 0;
} 