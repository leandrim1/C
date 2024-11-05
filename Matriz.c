#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

   int matA[3][3];
   char resp = 'S';

   while (resp == 'S' | resp == 's'){

    printf(" **ENTRE COM DADOS DA MATRIZ**\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d ", &matA[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%d",matA[i][j]);
        }
        printf("\n");
    }

    printf("Deseja continuar? <S = SIM>..: ");
    scanf(" %c", &resp);
   }
   
    return 0;
} 