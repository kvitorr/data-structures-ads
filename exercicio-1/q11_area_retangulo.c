#include <stdio.h>
#include <math.h>  

float area_retangulo(float base, float altura){
    return base*altura;
}

main(){
    float base, altura, area;

    printf("Digite a base e a altura de um retangulo em metros: ");
    scanf("%f %f", &base, &altura);

    area = area_retangulo(base, altura);    
    
    printf("Area do retangulo: %.2f metros quadrados", area);
}