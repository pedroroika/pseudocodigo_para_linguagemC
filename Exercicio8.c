#include <stdio.h>

int main() {
    // Declaração das variáveis de entrada e do acumulador de maior valor
    float a, b, c, maior;

    // Leitura de 3 valores
    printf("Digite o primeiro numero: ");
    scanf("%f", &a);
    printf("Digite o segundo numero: ");
    scanf("%f", &b);
    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    // Assume preliminarmente que 'a' é o maior
    maior = a;

    // Atualiza a variável 'maior' se encontrar um valor superior
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }

    // Exibe o maior valor encontrado
    printf("Maior valor: %.2f\n", maior);

    return 0;
}