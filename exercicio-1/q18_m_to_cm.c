#include <stdio.h>

main(){
    float m, cm;

    printf("Digite um valor em m: ");
    scanf("%f", &m);

    cm = m * 100;

    printf("%.2f m = %.2f cm", m, cm);
}