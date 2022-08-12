#include <stdio.h>

main(){
    float valor, novoValor;

    printf("Valor em Reais: ");
    scanf("%f", &valor);

    novoValor = valor * 0.7;

    printf("Valor atual: %.2f reais. Novo valor: %.2f reais", valor, novoValor);
}