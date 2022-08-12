#include <stdio.h>
#include <math.h>   

double getDivisao(double number1, double number2){
    return number1/number2;
}

double getResto(double number1, double number2){
    double resto;

    resto = ((number1/number2) - trunc(number1/number2)) * number2;
    return resto;
}

main(){
    int number1, number2;
    double divisao, resto;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &number1, &number2);

    divisao = getDivisao(number1, number2);
    resto = getResto(number1, number2);

    printf("Divisão: %d/%d = %.02f. Resto: %.0f", number1, number2, divisao, resto);
}