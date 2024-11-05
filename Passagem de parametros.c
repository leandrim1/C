#include <stdio.h>
#include <math.h>
#include <string.h>

float calcularSalarioBruto(float valorHora, float horasTrabalhadas){
    return valorHora * horasTrabalhadas;
}


int main() {
    
    float valorHora, horasTrabalhadas;

    printf("Informe o valor da hora..: ");
    scanf("%f", &valorHora);
    
    printf("Informe a quatidade Horas trabalhada..: ");
    scanf("%f", &horasTrabalhadas);

    float result = calcularSalarioBruto(valorHora, horasTrabalhadas);

    printf("Salario bruto..: R$ %.2f\n", result);
    printf("Fim do programa!\n");

    return 0;
} 