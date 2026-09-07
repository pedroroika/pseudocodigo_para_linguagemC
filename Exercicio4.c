#include <stdio.h>

int main() {
    // Declaração de variáveis
    float valor, final_val, desconto;

    // Entrada do valor da compra
    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    // Aplicação das regras de desconto baseadas no valor informado
    if (valor >= 300.0f) { // Ajustado para contemplar compras a partir de 300
        desconto = valor * 0.12f; // 12% de desconto
    } else {
        desconto = valor * 0.05f; // 5% de desconto
    }

    // Cálculo do valor com desconto
    final_val = valor - desconto;

    // Exibição dos resultados
    printf("Valor do desconto: R$ %.2f\n", desconto);
    printf("Valor final: R$ %.2f\n", final_val);

    return 0;
}