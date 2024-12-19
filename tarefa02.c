#include <stdio.h>

int main() {
    double valor;
    int opcao;

    printf("Escolha a opção de conversão:\n");
    printf("1. Quilogramas para Gramas\n");
    printf("2. Quilogramas para Toneladas\n");
    printf("3. Gramas para Quilogramas\n");
    printf("4. Gramas para Toneladas\n");
    printf("5. Toneladas para Quilogramas\n");
    printf("6. Toneladas para Gramas\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor para conversão: ");
    scanf("%lf", &valor);

    if (opcao == 1) {
        // quilogramas para gramas
        printf("%.2f kg é igual a %.2f gramas\n", valor, valor * 1000);
    }
    else if (opcao == 2) {
        // quilogramas para toneladas
        printf("%.2f kg é igual a %.2f toneladas\n", valor, valor / 1000);
    }
    else if (opcao == 3) {
        // gramas para quilogramas
        printf("%.2f gramas é igual a %.2f kg\n", valor, valor / 1000);
    }
    else if (opcao == 4) {
        // gramas para toneladas
        printf("%.2f gramas é igual a %.2f toneladas\n", valor, valor / 1000000);
    }
    else if (opcao == 5) {
        // toneladas para quilogramas
        printf("%.2f toneladas é igual a %.2f kg\n", valor, valor * 1000);
    }
    else if (opcao == 6) {
        // toneladas para gramas
        printf("%.2f toneladas é igual a %.2f gramas\n", valor, valor * 1000000);
    }
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}
