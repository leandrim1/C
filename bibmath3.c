#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {

    int x = 3;
    int y = 5;
    int z = 9;

    if(z > y & y > x){                                    // se(z for maior que y E y for maior que x)
        printf("z e maior que todos.. \n");               
    }else                                                 // se caso o if for falsa 
        printf("o y nao e maior que x  \n");
    


    printf("Fim do programa!\n");

    return 0;
} 