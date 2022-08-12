#include <stdio.h>
#include <math.h>  
#define PI 3.14

float volume_esfera(float raio){
    return (4*PI*pow(raio, 3))/3;
}

main(){
    float raio, volume;

    printf("Digite o raio da esfera em metros: ");
    scanf("%f", &raio);

    volume = volume_esfera(raio);    
    
    printf("Volume da esfera: %.2f metros quadrados", volume);
}