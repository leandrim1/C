#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    //while
    int contador = 1;

    printf("Comando While\n");
    while (contador <= 5){
        printf("%d Anderson\n", contador);
        contador = contador + 1;
    }
   
   //for
   printf("Comando For\n");
   for(int i = 1; i <= 5; i++){
        printf("%d Anderson\n", i);
   }

   //do while
   printf("Comando do While\n");
   int cont = 1;
   do{
        printf("%d Anderson\n", cont);
        cont = cont + 1;
   } while (cont <= 5);
   

    printf("Fim do programa!\n");

    return 0;
} 