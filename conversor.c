#include <stdio.h>
#include <locale.h>

double converter_para_cm2(double numero) {
    return numero * 10000;
}

double converter_para_m2(double numero) {
    return numero / 10000;
}

int main() {
    double valorInformado, valorConvertido;
    int opcao = -1;

    do {
        printf("Converter m2 em cm2 -- Digite 1 \n");
        printf("Converter cm2 em m2 -- Digite 2 \n");
        printf("Sair -- Digite 0 \n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Informe o valor em metros quadrados: ");
            if (scanf("%lf", &valorInformado) != 1 || valorInformado <= 0) {
                printf("Entrada invalida. Por favor, insira um numero maior que 0.\n");
            } else {
                valorConvertido = converter_para_cm2(valorInformado);
                printf("Valor em centimetros quadrados: %f\n", valorConvertido);
            }
        } else if (opcao == 2) {
            printf("Informe o valor em centimetros quadrados: ");
            if (scanf("%lf", &valorInformado) != 1 || valorInformado <= 0) {
                printf("Entrada invalida. Por favor, insira um numero maior que 0.\n");
            } else {
                valorConvertido = converter_para_m2(valorInformado);
                printf("Valor em metros quadrados: %f\n", valorConvertido);
            }
        } else if (opcao == 0) {
            printf("Saindo do programa.\n");
        } else  {
            printf("Opcao invalida. Por favor, selecione uma opcao valida.\n");
        }

    } while (opcao != 0);

    return 0;
}
