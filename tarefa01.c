#include <stdio.h>

int u; int cp; float v; //u de usando, cp de converter para e v de valor 

int main (){

    printf("digite o valor a ser convertido: ");
    scanf("%f", &v);

    printf("Qual unidade de medida est� usando? \n1-metro, \n2-cent�metros, \n3-mil�metros");
    printf("Responda com 1, 2 ou 3 : ");
    scanf("%d", &u);

    printf("Para qual unidade de medida quer converter? \n1-metro, \n2-cent�metros, \n3-mil�metros");
    printf("Responda com 1, 2 ou 3 : ");
    scanf("%d", &cp);

    if (u == 1 && cp == 2){
    printf("Est� sendo convertido de metro para cent�metro\n");
    v = v*100;
    printf("Resultado: %.2f cent�metros\n", v);
    }
    else if (u == 1 && cp == 3){
    printf("Est� sendo convertido de metro para mil�metros\n");
    v = v*1000;
    printf("Resultado: %.2f mil�metros\n", v);
    }
    else if (u == 2 && cp == 3){
    printf("Est� sendo convertido de centimetros para mil�metros\n");
    v = v*10;
    printf("Resultado: %.2f mil�metros\n", v);
    }
    else if (u == 2 && cp == 1){
    printf("Est� sendo convertido de centimetros para metro\n");
    v = v/100;
    printf("Resultado: %.2f metros\n", v);
    }
    else if (u == 3 && cp == 1){
    printf("Est� sendo convertido de milimetrors para metro\n");
    v = v/1000;
    printf("Resultado: %.2f metros\n", v);
    }
    else if (u == 3 && cp == 2){
    printf("Est� sendo convertido de milimetros para centimetros\n");
    v = v/10;
    printf("Resultado: %.2f centimetros\n", v);
    }

    return 0;
} //acabou