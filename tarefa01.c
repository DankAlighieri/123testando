#include <stdio.h>

int u; int cp; float v; //u de usando, cp de converter para e v de valor 

int main (){

    printf("digite o valor a ser convertido: ");
    scanf("%f", &v);

    printf("Qual unidade de medida está usando? \n1-metro, \n2-centímetros, \n3-milímetros");
    printf("Responda com 1, 2 ou 3 : ");
    scanf("%d", &u);

    printf("Para qual unidade de medida quer converter? \n1-metro, \n2-centímetros, \n3-milímetros");
    printf("Responda com 1, 2 ou 3 : ");
    scanf("%d", &cp);

    if (u == 1 && cp == 2){
    printf("Está sendo convertido de metro para centímetro\n");
    v = v*100;
    printf("Resultado: %.2f centímetros\n", v);
    }
    else if (u == 1 && cp == 3){
    printf("Está sendo convertido de metro para milímetros\n");
    v = v*1000;
    printf("Resultado: %.2f milímetros\n", v);
    }
    else if (u == 2 && cp == 3){
    printf("Está sendo convertido de centimetros para milímetros\n");
    v = v*10;
    printf("Resultado: %.2f milímetros\n", v);
    }
    else if (u == 2 && cp == 1){
    printf("Está sendo convertido de centimetros para metro\n");
    v = v/100;
    printf("Resultado: %.2f metros\n", v);
    }
    else if (u == 3 && cp == 1){
    printf("Está sendo convertido de milimetrors para metro\n");
    v = v/1000;
    printf("Resultado: %.2f metros\n", v);
    }
    else if (u == 3 && cp == 2){
    printf("Está sendo convertido de milimetros para centimetros\n");
    v = v/10;
    printf("Resultado: %.2f centimetros\n", v);
    }

    return 0;
