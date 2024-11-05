#include <stdio.h>
#include <math.h>
#include <string.h>

//Função com retorno para somar dois numeros
int soma(int a, int b){
    
    return a + b;
}

int main() {
    //Chamando a função com retorno para somar dois numeros
    int resultado = soma(2,2);
    // Exibindo o resultado da soma
    printf("A soma e..: %d\n", resultado);
    printf("Fim do programa!\n");

    return 0;
} 