// 7. Unidades de área (metro quadrado, centímetro quadrado)

#include <stdio.h>
#include <locale.h>

float converter_cm2(float numero) {
    float resultado = numero * 10000;
    return resultado;
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float valorMetroQuadrado, valorConvertido;

    printf("Informe o valor em metros quadrados: ");
    if (scanf("%f", &valorMetroQuadrado) != 1) {
        printf("Entrada inválida. Por favor, insira um número.\n");
        return 1;
    }

    valorConvertido = converter_cm2(valorMetroQuadrado);
    printf("Valor em centímetros quadrados é: %.2f\n", valorConvertido);
    return 0;
}