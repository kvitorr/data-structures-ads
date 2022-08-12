#include <stdio.h>
#include <math.h>  
#define PI 3.1416

float comprimento_circunferencia(float raio){
    return 2*PI*raio;
}

main(){
    float raio, comprimento;

    printf("Digite o raio da circunferencia em metros: ");
    scanf("%f", &raio);

    comprimento = comprimento_circunferencia(raio);    
    
    printf("Comprimento da circunferencia: %.2f metros quadrados", comprimento);
}