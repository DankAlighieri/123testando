#include <stdio.h>

void converterVelocidade(float valor, int entrada, int saida) {
    float resultado;

    if (entrada == 1) { // km/h para ...
        if (saida == 2) resultado = valor / 3.6; // m/s
        else if (saida == 3) resultado = valor / 1.609; // mph
        else resultado = valor; // km/h (mesma unidade)
    } else if (entrada == 2) { // m/s para ...
        if (saida == 1) resultado = valor * 3.6; // km/h
        else if (saida == 3) resultado = valor * 2.237; // mph
        else resultado = valor; // m/s (mesma unidade)
    } else if (entrada == 3) { // mph para ...
        if (saida == 1) resultado = valor * 1.609; // km/h
        else if (saida == 2) resultado = valor / 2.237; // m/s
        else resultado = valor; // mph (mesma unidade)
    } else {
        printf("Unidade de entrada invalida!\n");
        return;
    }

    printf("Resultado: %.2f\n", resultado);
}

int main() {
    float valor;
    int entrada, saida;

    printf("Conversor de Unidades de Velocidade\n");
    printf("1. km/h\n2. m/s\n3. mph\n");

    printf("\nEscolha a unidade de entrada (1-3): ");
    scanf("%d", &entrada);

    printf("Digite o valor: ");
    scanf("%f", &valor);

    printf("Escolha a unidade de saida (1-3): ");
    scanf("%d", &saida);

    converterVelocidade(valor, entrada, saida);

    return 0;
}