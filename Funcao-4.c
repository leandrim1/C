#include<stdio.h>

// Funcao que verifica quantos dos tres numeros passados sao pares
int VerificadorDePar(int a, int b, int c){
    int cont = 0; //Inicializa um contador de numeros pares

    // verifica se 'a' é par
    if(a % 2 == 0){
        cont++; // incrementa o contador se 'a' for par
    }
    // verifica se 'b' é par
    if(b % 2 == 0){
        cont ++; // incrementa o contador se 'b' for par
    }
    // verifica se 'c' é par
    if(c % 2 == 0){
        cont++; // incrementa o contador se 'c' for par
    }
    return cont; // retorna a quantidade de numero pares
}

int main(){
    int a , b , c; // declara tres variaveis inteiras

    // le tres numeros inteiros digitados pelo usuario
    scanf("%d %d %d", &a , &b , &c);
    // chama a funcao VericadorDePar e imprime o numero de valores pares
    printf("%d\n", VerificadorDePar(a , b , c));

    
    return 0; // indica que o programa terminou com sucesso 
}