#include <stdio.h>
#include <math.h>  

float area_quadrado(float lado){
    return lado*lado;
}

main(){
    float lado, area;

    printf("Digite o lado do quadrado em metros: ");
    scanf("%f", &lado);

    area = area_quadrado(lado);    
    
    printf("Area do triangulo: %.2f metros quadrados", area);
}