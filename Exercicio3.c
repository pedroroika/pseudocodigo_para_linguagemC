#include <stdio.h>

int main() {
    // Declaração de variável inteira
    int num;

    // Entrada do número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // O operador % calcula o resto da divisão por 2
    if (num % 2 == 0) {
        printf("Par\n");
    } else {
        printf("Impar\n");
    }

    return 0;
}