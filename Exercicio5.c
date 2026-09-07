#include <stdio.h>

int main() {
    // Declaração de variáveis financeiras
    float salario, aumento, final_salario;

    // Leitura do salário atual
    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    // Aplicação da taxa de aumento conforme a faixa salarial
    if (salario < 2500.0f) {
        aumento = salario * 0.10f; // 10% de aumento
    } else {
        aumento = salario * 0.06f; // 6% de aumento
    }

    // Cálculo do novo salário
    final_salario = salario + aumento;

    // Exibição detalhada dos valores
    printf("Salario inicial: R$ %.2f\n", salario);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Salario final: R$ %.2f\n", final_salario);

    return 0;
}