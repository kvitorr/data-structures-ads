#include <stdio.h>

main(){
    float msVelocity;
    float kmhVelocity;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &msVelocity);

    kmhVelocity = msVelocity * 3.6;
    printf("%.2f m/s = %.2f km/h", msVelocity, kmhVelocity);
}