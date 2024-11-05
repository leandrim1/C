#include <stdio.h>

int main() {
    // Declaração de variáveis
    int num_alunos = 0, nota, soma_notas = 0;
    int maior_nota = -1, menor_nota = 101;
    int aprovados = 0, reprovados = 0;
    float media;

    // Leitura das notas dos alunos usando um loop (while)
    printf("Digite as notas dos alunos (digite -1 para finalizar):\n");
    while (1) {
        printf("Nota do aluno %d: ", num_alunos + 1);
        scanf("%d", &nota);

        // Verificação para finalizar a leitura
        if (nota == -1) {
            break;
        }

        // Verifica se a nota é válida
        if (nota < 0 || nota > 100) {
            printf("Nota inválida. Digite uma nota entre 0 e 100.\n");
            continue;
        }

        // Cálculo da soma das notas
        soma_notas += nota;
        num_alunos++;

        // Identificação da maior e menor nota
        if (nota > maior_nota) {
            maior_nota = nota;
        }
        if (nota < menor_nota) {
            menor_nota = nota;
        }

        // Contagem dos alunos que passaram e não passaram
        if (nota >= 60) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    // Cálculo da média das notas
    if (num_alunos > 0) {
        media = (float)soma_notas / num_alunos;

        // Impressão dos resultados
        printf("\nResultados:\n");
        printf("Número de alunos: %d\n", num_alunos);
        printf("Média das notas: %.2f\n", media);
        printf("Maior nota: %d\n", maior_nota);
        printf("Menor nota: %d\n", menor_nota);
        printf("Alunos aprovados: %d\n", aprovados);
        printf("Alunos reprovados: %d\n", reprovados);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}
