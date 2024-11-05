#include <stdio.h>
#include <time.h>

// Função recursiva simples para calcular o n-ésimo número de Fibonacci
int fibonacciRecursivo(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacciRecursivo(n - 1) + fibonacciRecursivo(n - 2);
}
int fibonacciRecursivoCaudaAux(int n, int a, int b) {
    if (n == 0) {
        return a;
    }
    return fibonacciRecursivoCaudaAux(n - 1, b, a + b);
}

int fibonacciRecursivoCauda(int n) {
    return fibonacciRecursivoCaudaAux(n, 0, 1);
}
void compararFibonacci(int n) {
    clock_t inicio, fim;
    double tempoRecursivo, tempoCauda;

    // Medindo o tempo da função recursiva simples
    inicio = clock();
    int resultadoRecursivo = fibonacciRecursivo(n);
    fim = clock();
    tempoRecursivo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    // Medindo o tempo da função recursiva em cauda
    inicio = clock();
    int resultadoCauda = fibonacciRecursivoCauda(n);
    fim = clock();
    tempoCauda = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("n: %d\n", n);
    printf("Fibonacci Recursivo: %d, Tempo: %f segundos\n", resultadoRecursivo, tempoRecursivo);
    printf("Fibonacci Recursivo em Cauda: %d, Tempo: %f segundos\n", resultadoCauda, tempoCauda);
    printf("\n");
}

int main() {
    int n = 20; // Teste com diferentes valores de n

    compararFibonacci(n);

    return 0;
}