#include <stdio.h>

int main() {
    float valor, resultado;
    int operador;

    printf("Digite o número da operação de conversão que você deseja realizar:\n");
    printf("1 - Watts (W) para Quilowatts (kW).\n");
    printf("2 - Quilowatts (kW) para Watts (W).\n");
    printf("3 - Watts (W) para Cavalos-vapor (cv).\n");
    printf("4 - Cavalos-vapor (cv) para Watts (W).\n");
    printf("5 - Quilowatts (kW) para Cavalos-vapor (cv).\n");
    printf("6 - Cavalos-vapor (cv) para Quilowatts (kW).\n");
    scanf("%d", &operador);

    if (operador < 1 || operador > 6) {
        printf("Operador inválido.\n");
        return 0;
    }

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &valor);

    switch (operador) {
        case 1:
            // Watts para Quilowatts
            resultado = valor / 1000;
            printf("%.2f Watts (W) equivale a %.2f Quilowatts (kW).\n", valor, resultado);
            break;
        case 2:
            // Quilowatts para Watts
            resultado = valor * 1000;
            printf("%.2f Quilowatts (kW) equivale a %.2f Watts (W).\n", valor, resultado);
            break;
        case 3:
            // Watts para Cavalos-vapor
            resultado = valor / 735.5;
            printf("%.2f Watts (W) equivale a %.2f Cavalos-vapor (cv).\n", valor, resultado);
            break;
        case 4:
            // Cavalos-vapor para Watts
            resultado = valor * 735.5;
            printf("%.2f Cavalos-vapor (cv) equivale a %.2f Watts (W).\n", valor, resultado);
            break;
        case 5:
            // Quilowatts para Cavalos-vapor
            resultado = valor * 1000 / 735.5;
            printf("%.2f Quilowatts (kW) equivale a %.2f Cavalos-vapor (cv).\n", valor, resultado);
            break;
        case 6:
            // Cavalos-vapor para Quilowatts
            resultado = valor * 735.5 / 1000;
            printf("%.2f Cavalos-vapor (cv) equivale a %.2f Quilowatts (kW).\n", valor, resultado);
            break;
    }

    return 0;
}