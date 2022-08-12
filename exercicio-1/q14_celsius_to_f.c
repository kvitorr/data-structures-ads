#include <stdio.h>

float c_to_f(float celsius){
    return ((9*celsius)+160)/5;
}

main(){
    float celsius, fahrenheit;

    printf("Digite uma temperatura em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = c_to_f(celsius);
    
    printf("%.2f celsius = %.2f fahrenheit", celsius, fahrenheit);
}