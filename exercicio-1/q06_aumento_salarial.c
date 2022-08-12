#include <stdio.h>

main(){
    float salario, novoSalario;

    printf("Salario: ");
    scanf("%f", &salario);

    novoSalario = salario * 1.25;

    printf("Salario atual: %.2f. Salario com aumento: %.2f.", salario, novoSalario);
}