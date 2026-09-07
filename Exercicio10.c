#include <stdio.h>

int main() {
    // Declaração de notas, frequência e média
    float n1, n2, n3, media;
    int freq;

    // Entrada de notas e frequência percentual
    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a frequencia (em %%): ");
    scanf("%d", &freq);

    // Cálculo da média aritmética simples
    media = (n1 + n2 + n3) / 3.0f;

    // Avaliação do status do aluno considerando presenca e desempenho
    if (freq < 75) {
        printf("Reprovado por falta\n");
    } else if (media < 5.0f) {
        printf("Reprovado por nota (Media: %.2f)\n", media);
    } else if (media >= 5.0f && media < 7.0f) {
        printf("Recuperacao (Media: %.2f)\n", media);
    } else {
        printf("Aprovado (Media: %.2f)\n", media);
    }

    return 0;
}