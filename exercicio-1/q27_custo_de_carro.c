#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    float custo_de_fabrica, custo_consumidor;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_de_fabrica);

    custo_consumidor = custo_de_fabrica + custo_de_fabrica*0.28 + custo_de_fabrica*0.45;

    printf("Custo do consumidor: %.2f reais", custo_consumidor);
}