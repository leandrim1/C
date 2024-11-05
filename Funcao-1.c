#include <stdio.h>  // Biblioteca padrão para entrada e saída

// Função que calcula o valor de delta (discriminante) em uma equação quadrática
double delta (double a, double b, double c){
    // Calcula o valor de delta: d = b*2 - 4*a*c
    double d = (b * b) - (4 * a * c);
    return d;  // Retorna o valor de delta
}

int main(){
    double a, b, c;  // Declara três variáveis para armazenar os coeficientes da equação quadrática
    
    // Lê os valores de a, b e c digitados pelo usuário
    scanf("%lf %lf %lf", &a, &b, &c);
    
    // Imprime o valor de delta calculado pela função delta
    printf("%lf\n", delta(a, b, c));
    
    return 0;  // Retorna 0 indicando que o programa terminou com sucesso
}