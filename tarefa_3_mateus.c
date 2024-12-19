#include <stdio.h>
 
double valor, ValorConvertido;
int Origem, Destino;

int main(){

    // Função para exibir a unidade inicial
    printf("\nEscolha a unidade:\n");
    printf("1. Litro (L)\n");
    printf("2. Mililitro (mL)\n");
    printf("3. Metros cubicos (m^3)\n");  

    // Solicitar a unidade inicial
    printf("Digite o numero correspondente a unidade de origem: ");
    scanf("%d", &Origem);

    // Validar unidade de origem
    if (Origem < 1 || Origem > 3) {
        printf("Opcao de origem invalida!\n");
        return 1;
    }

    // Solicitar a unidade de conversão
    printf("Digite o numero correspondente a unidade de destino: ");
    scanf("%d", &Destino);

    
     // Validar unidade de destino
    if (Destino < 1 || Destino > 3) {
        printf("Opcao de destino invalida!\n");
        return 1;
    }

    // Solicitar o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    // Converter de origem para litros
    switch (Origem) {
        case 1: // Litros
            switch (Destino) {
                case 1: ValorConvertido = valor;                // Litros para Litro
                     break;  
                case 2: ValorConvertido = valor * 1000;         // Litros para Mililitros
                     break;
                case 3: ValorConvertido = valor / 1000;         // Litros para Metros cúbicos
                     break;
            }
            break;
        case 2: // Mililitros
            switch (Destino) {
                case 1: ValorConvertido = valor / 1000;         // Mililitros para Litros
                     break;
                case 2: ValorConvertido = valor;                // Mililitros para Mililitros
                     break;
                case 3: ValorConvertido = valor / 1000000;          // Mililitros para Metros cúbicos
                     break;
            }
            break;
        case 3: // Metros cúbicos
            switch (Destino) {
                case 1: ValorConvertido = valor * 1000;         // Metros cúbicos para Litros
                     break;
                case 2: ValorConvertido = valor * 1000000;          // Metros cúbicos para Mililitros
                     break;
                case 3: ValorConvertido = valor;                // Metros cúbicos para Metros cúbicos
                     break;
            }
            break;
    }
    
    // Exibir o resultado
    printf("\nResultado: %.2lf\n", ValorConvertido);

    return 0;
    }


