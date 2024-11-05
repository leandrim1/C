#include <stdio.h>
#include <math.h>
#include <string.h>

struct Aluno {
    
    char nome[50];      // Use colchetes para declarar o tamanho do array
    int idade;          // Definir um numero inteiro para idade
    float mediaNotas;

};

int main() {

    struct Aluno aluno1;

    strcpy(aluno1.nome, "Leandro");
    aluno1.idade      = 20;
    aluno1.mediaNotas = 9.8;

    printf("Nome.......: %s\n",   aluno1.nome);              // Imprime o nome do aluno
    printf("Idade......: %d\n",   aluno1.idade);             // Imprime a idade do aluno
    printf("Media......: %.2f\n", aluno1.mediaNotas);        // Imprime a média das notas do aluno

    printf("Fim do programa!\n");

    return 0;
} 