#include <stdio.h>

main(){
    float dollarAmount, dollarPrice, real;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &dollarPrice);
    
    printf("Digite a quantidade de dolares que deseja comprar: ");
    scanf("%f", &dollarAmount);

    real = dollarAmount * dollarPrice;

    printf("%.2f dolares a uma cotacao de %.2f reais, e' equivalente a %.2f reais", dollarAmount, dollarPrice, real);

}