#include <stdio.h>

float CelsiusParaFahrenheit(float temperatura);
float KelvinParaFahrenheit(float temperatura);
float CelsiusParaKelvin(float temperatura);
float FahrenheitParaKelvin(float temperatura);
float FahrenheitParaCelsius(float temperatura);
float KelvinParaCelsius(float temperatura);


int main()
{
    int opcaoEntrada, opcaoSaida;
    float temperatura, resultado;

    printf("\nConversor de Temperaturas\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("\nOpção: ");
    scanf("%d", &opcaoEntrada);

    printf("\nEscolha a unidade de saída:\n");
    printf("1. Celsius\n");
    printf("2. Fahrenheit\n");
    printf("3. Kelvin\n");
    printf("\nOpção: ");
    scanf("%d", &opcaoSaida);

    printf("\nDigite o valor da temperatura: ");
    scanf("%f", &temperatura);

    if (opcaoEntrada == 1 && opcaoSaida == 2) {
        resultado = CelsiusParaFahrenheit(temperatura);
    } else if (opcaoEntrada == 1 && opcaoSaida == 3) {
        resultado = CelsiusParaKelvin(temperatura);
    } else if (opcaoEntrada == 2 && opcaoSaida == 1) {
        resultado = FahrenheitParaCelsius(temperatura);
    } else if (opcaoEntrada == 2 && opcaoSaida == 3) {
        resultado = FahrenheitParaKelvin(temperatura);
    } else if (opcaoEntrada == 3 && opcaoSaida == 1) {
        resultado = KelvinParaCelsius(temperatura);
    } else if (opcaoEntrada == 3 && opcaoSaida == 2) {
        resultado = KelvinParaFahrenheit(temperatura);
    } else if (opcaoEntrada == opcaoSaida) {
        resultado = temperatura;
    } else {
        printf("\nOpção inválida\n");
        return 1;
    }

    printf("\nTemperatura convertida: %.2f\n", resultado);
    return 0;
}

float CelsiusParaFahrenheit(float temperatura){
    return (temperatura * 9.0 / 5.0) + 32;
}

float KelvinParaFahrenheit(float temperatura){
    return (temperatura - 273.15) * 9.0 / 5.0 + 32;
}

float CelsiusParaKelvin(float temperatura){
    return temperatura + 273.15;
}

float FahrenheitParaKelvin(float temperatura){
    return (temperatura - 32) * 5.0 / 9.0 + 273.15;
}

float FahrenheitParaCelsius(float temperatura){
    return (temperatura - 32) * 5.0 / 9.0;
}

float KelvinParaCelsius(float temperatura){
    return temperatura - 273.15;
}