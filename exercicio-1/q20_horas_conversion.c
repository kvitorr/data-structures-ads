#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int horas, semanas, dias, resto;

    printf("Digite um valor em horas: ");
    scanf("%d", &horas);

    semanas = trunc(horas/168);
    resto = horas%168;

    dias = trunc(resto/24);
    horas = resto%24;

    printf("%d semanas, %d dias, %d horas", semanas, dias, horas);
}