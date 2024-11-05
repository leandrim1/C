#include <stdio.h>
#include <math.h>
#include <string.h>

void moveTorre(int n, char origem, char destino, char intermediario){
    if(n == 1){
        printf("Mova o disco de %c para %c\n", origem, destino);
        return;
    }
    moveTorre(n - 1, origem, intermediario, destino);
    printf("Mova o disco de %c para %c\n", origem, destino);
    moveTorre(n - 1, intermediario, destino, origem);
}

int main() {

    moveTorre(3,'A','C','B');
  

    printf("Fim do programa!\n");

    return 0;
} 