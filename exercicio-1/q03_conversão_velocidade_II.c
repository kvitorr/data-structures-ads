#include <stdio.h>

main(){
    float msVelocity;
    float kmhVelocity;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &kmhVelocity);

    msVelocity = kmhVelocity/3.6;
    printf("%.2f km/h = %.2f m/s", kmhVelocity, msVelocity);
}