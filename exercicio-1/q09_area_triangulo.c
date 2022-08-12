#include <stdio.h>
#include <math.h>  

float area_triangulo(float base, float altura){
    return (base*altura)/2;
}

main(){
    float base, altura, area;

    printf("Digite a base e a altura de um triangulo em metros, separados por espaco: ");
    scanf("%f %f", &base, &altura);

    area = area_triangulo(base, altura);    
    
    printf("Area do triangulo: %.2f metros quadrados", area);
}
