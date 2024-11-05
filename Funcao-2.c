#include<stdio.h>

// Funcao que retorna o maior valor entre dois numeros x e y
int MaiorMenor(int x, int y){
    // Se x for maior que y
    if (x > y){
        return x; // retorna o valor de x
    } else {
        return y; // caso contrario, retorna o valor de y
    }

}

int main(){
    int x, y; // declara dua variaveis inteiras

    // le dois valores inteiros digitados pelo usuario
    scanf("%d %d", &x, &y);
    // impre o maior valor entre x e y
    printf("%d\n", MaiorMenor(x , y));


    return 0; // indica que o programa terminou 
}