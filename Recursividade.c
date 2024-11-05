#include <stdio.h>
#include <math.h>
#include <string.h>

void imprimirNumeros(int n){
    // Caso base
    if(n == 0){
        return;
    }
    // Caso recursivo
    else{
        printf("%d",n);
        imprimirNumeros(n - 1);
    }
}


int main() {

    int numero = 5;
    printf("Os primeiros %d numeros naturais em ordem decrescente sao..: ",numero);
    
    //chamar a funcao recursiva
    imprimirNumeros(numero);
    printf("\n");

    printf("Fim do programa!\n");

    return 0;
} 