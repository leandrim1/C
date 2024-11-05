#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    int matA[4][4];

    //populacao da matriz
    for (int i = 0; i < 4; i++){  
        
        for (int j = 0; j < 4; j++){ 
            
            scanf("%d", &matA[i][j]);
        }
        printf("\n");

    }
    
    // exibicao da matriz
    for (int i = 0; i < 4; i++){           
        
        for (int j = 0; j < 4; j++){
            
            printf("%d ", matA[i][j]);
        }

        printf("\n");
    }


    return 0;
} 