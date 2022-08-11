#include <stdio.h>

int main(void){

    int numero;
    int resultado = 1;

    scanf("%d", &numero);
    int i;

    for(i = numero; i > 0; i--){
        resultado = resultado * i;
    }


    printf("%d", resultado);

    return 0;
}