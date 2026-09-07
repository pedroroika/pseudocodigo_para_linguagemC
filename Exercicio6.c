#include <stdio.h>

int main() {
    // Declaração de variáveis
    float km, litro, eficiencia;

    // Leitura dos dados de viagem
    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &km);
    printf("Digite o consumo de combustível (litros): ");
    scanf("%f", &litro);

    // Cálculo de km por litro
    eficiencia = km / litro;

    // Avaliação de desempenho do veículo
    if (eficiencia >= 12.0f) {
        printf("Eficiente (%.2f km/l)\n", eficiencia);
    } else {
        printf("Baixa eficiencia (%.2f km/l)\n", eficiencia);
    }

    return 0;
}