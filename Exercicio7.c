#include <stdio.h>

int main() {
    // Declaração de variável de idade
    int idade;

    // Leitura da idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Estrutura de decisões encadeadas para faixas etárias
    if (idade <= 11) {
        printf("Crianca\n");
    } else if (idade >= 12 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
} 