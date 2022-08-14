#include <stdio.h>

main(){
    float kg, g;

    printf("Digite um valor em kg: ");
    scanf("%f", &kg);

    g = kg * 1000;

    printf("%.4f kg = %.2f g", kg, g);
}