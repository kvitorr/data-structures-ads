#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int anos, meses, dias, total_idade, resto;

    printf("Digite a idade de uma pessoa expressa em dias: ");
    scanf("%d", &total_idade);


    anos = trunc(total_idade/365);
    resto = total_idade%365;

    meses = trunc(resto/30);
    dias = resto%30;


    printf("%d anos %d meses %d dias", anos, meses, dias);
}