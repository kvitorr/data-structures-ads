#include <stdio.h>
#include <math.h>

main(){
    int number, numberInverted;
    float unidade, dezena, centena;

    printf("Digite um numero de 3 digitos: ");
    scanf("%d", &number);

    centena = number/100;

    dezena = trunc((number - (centena * 100))/10);

    unidade = number - (centena * 100 + dezena * 10);

    numberInverted = unidade * 100 + dezena * 10 + centena * 1;

    printf("Numero: %d. Inverso: %d.", number, numberInverted);
}