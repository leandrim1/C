#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int tabuada = 6;
    int resultado = 0;

    printf("Tabuado de que numero..: ");
    scanf("%d", &tabuada);

    int cont = 1;
    while (cont <= 10){
        
        resultado = tabuada * cont;
        printf("%d x %d = %d\n", tabuada, cont, resultado);
        cont++;
    }
    

    printf("Fim do programa!\n");

    return 0;
} 