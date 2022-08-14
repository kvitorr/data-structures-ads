#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int entrada, prestacoes, valor_mercadoria;

    printf("Digite o valor da mercadoria em reais: ");
    scanf("%d", &valor_mercadoria);

    entrada = trunc(valor_mercadoria/3) + (valor_mercadoria%3);

    prestacoes = (valor_mercadoria-entrada)/2;

    printf("Valor da mercadoria: %d reais\nEntrada de %d reais + 2 prestacoes de %d reais", valor_mercadoria, entrada, prestacoes);
}