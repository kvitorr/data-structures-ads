#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int meses, anos, resto;

    printf("Digite um valor em meses: ");
    scanf("%d", &meses);

    anos = trunc(meses/12);
    resto = meses%12;

    meses = resto;

    printf("%d anos, %d meses", anos, meses);
}