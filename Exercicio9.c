#include <stdio.h>

int main() {
    // Declaração do consumo mensal e da tarifa final
    float conmen, tarifa;

    // Entrada do consumo de energia/água
    printf("Digite o consumo mensal: ");
    scanf("%f", &conmen);

    // Aplicação das faixas tarifárias
    if (conmen <= 100.0f) {
        tarifa = conmen * 0.60f;
    } else if (conmen >= 101.0f && conmen <= 200.0f) {
        tarifa = conmen * 0.75f;
    } else {
        tarifa = conmen * 0.90f;
    }

    // Exibição da tarifa calculada
    printf("Valor da tarifa: R$ %.2f\n", tarifa);

    return 0;
}