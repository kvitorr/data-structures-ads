#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int m;
    int km, resto;

    printf("Digite um valor em m: ");
    scanf("%d", &m);

    km = trunc(m/1000);
    resto = m%1000;

    printf("%d quilometros e %d metros", km, resto);
}