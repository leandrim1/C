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

int fibonacci(int n){

    if(n <= 1){
        return n;
    }
    else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }

}

int main() {

    int termo;
    printf("Digite o termo de fibonacci desejado..:");
    scanf("%d", &termo);

    printf("O  termo de fibonacci de %d e %d\n", termo, fibonacci(termo));


    printf("Fim do programa!\n");

    return 0;
} 