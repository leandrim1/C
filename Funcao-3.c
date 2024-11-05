#include <stdio.h>

// Função que conta de 1 até n
void Contador(int n){
    int i;
    // Loop que vai de 1 até n
    for (i = 1; i <= n; i++){
        printf("%d\n", i);  // Imprime o valor de i a cada iteração
    }
}

int main(){
    int n;
    
    // Lê o valor de n digitado pelo usuário
    scanf("%d", &n);
    
    // Chama a função Contador passando n como argumento
    Contador(n);
    
    return 0;  // Indica que o programa terminou com sucesso
}
