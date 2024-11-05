#include<stdio.h>

// Função que calcula a soma dos termos de uma progressão aritmética (PA)
// Dados: a1 (primeiro termo), a2 (último termo) e n (número de termos)
// Retorna: a soma da PA
double somaTermo(double a1 ,double a2 ,int n) {
    double somaPA;

    // Fórmula da soma da PA
    somaPA = (n * (a1 + a2)) / 2;

    return somaPA;  // Retorna o valor da soma calculada
}

int main() {
    double a1, a2, soma;  // Variáveis para armazenar os valores de entrada e a soma
    int n;  // Variável para armazenar o número de termos

    // Leitura dos valores: primeiro termo (a1), último termo (a2) e número de termos (n)
    scanf("%lf %lf %d", &a1, &a2, &n);

    // Chama a função somaTermo para calcular a soma da PA
    soma = somaTermo(a1, a2, n);

    // Exibe o valor da soma da PA
    printf("%lf\n", soma);

    return 0;  // Indica que o programa terminou com sucesso