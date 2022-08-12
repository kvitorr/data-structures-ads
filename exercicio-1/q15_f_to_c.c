#include <stdio.h>

float f_to_c(float fahrenheit){
    return (5*fahrenheit - 160)/9;
}

main(){
    float celsius, fahrenheit;

    printf("Digite uma temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = f_to_c(fahrenheit);
    
    printf("%.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
}