#include <stdio.h>
#include <string.h>

// Definição de constantes
#define JUROS_ANUAL 0.05 // 5% de taxa de juros

int main() {
    // Declaração de variáveis
    float valor_inicial, valor_final;
    int anos;
    int vetor[3] = {10, 20, 30}; // Vetor inicializado com 3 elementos
    int matriz[2][2] = {{1, 2}, {3, 4}}; // Matriz 2x2 inicializada
    int *ptr_vetor;

    // Entrada do usuário
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);

    printf("Digite o número de anos: ");
    scanf("%d", &anos);

    // Cálculo do valor final usando juros simples
    valor_final = valor_inicial * (1 + (JUROS_ANUAL * anos));

    // Exibição do valor final do investimento
    printf("Valor final do investimento: %.2f\n", valor_final);

    // Manipulação e exibição do vetor e da matriz
    ptr_vetor = &vetor[0]; // Atribuindo o endereço do primeiro elemento do vetor ao ponteiro
    *ptr_vetor = 50; // Modificando o valor do primeiro elemento do vetor

    // Exibição dos valores do vetor
    printf("Elementos do vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);

    // Exibição dos elementos da matriz
    printf("Elementos da matriz: %d, %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

    // Exibição dos endereços de memória
    printf("Endereço de vetor[0]: %p\n", (void*)&vetor[0]);
    printf("Endereço de vetor[1]: %p\n", (void*)&vetor[1]);
    printf("Endereço de vetor[2]: %p\n", (void*)&vetor[2]);
    printf("Endereço de matriz[0][0]: %p\n", (void*)&matriz[0][0]);
    printf("Endereço de matriz[0][1]: %p\n", (void*)&matriz[0][1]);
    printf("Endereço de matriz[1][0]: %p\n", (void*)&matriz[1][0]);
    printf("Endereço de matriz[1][1]: %p\n", (void*)&matriz[1][1]);

    return 0;
}
