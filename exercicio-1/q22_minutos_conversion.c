#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int minutos, dias, horas, resto;

    printf("Digite um valor em minutos: ");
    scanf("%d", &minutos);

    dias = trunc(minutos/1440);
    resto = minutos%1440;

    horas = resto/60;
    minutos  = resto%60;

    printf("%d dias, %d horas, %d minutos", dias, horas, minutos);
}