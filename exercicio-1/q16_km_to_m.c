#include <stdio.h>

main(){
    float km, m;

    printf("Digite um valor em km: ");
    scanf("%f", &km);

    m = km * 1000;

    printf("%.4f km = %.2f m", km, m);
}