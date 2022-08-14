#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int notas_50, notas_20, notas_10, notas_5, notas_2, resto, total_dinheiro;

    printf("Digite a quantidade em reais: ");
    scanf("%d", &total_dinheiro);

    notas_50 = trunc(total_dinheiro/50);
    resto = total_dinheiro%50;

    notas_20 = trunc(resto/20);
    resto = resto%20;

    notas_10 = trunc(resto/10);
    resto = resto%10;

    notas_5 = trunc(resto/5);
    resto = resto%5;

    notas_2 = trunc(resto/2);
    resto = resto%2;

    printf("%d nota(s) de 50 reais\n", notas_50);
    printf("%d nota(s) de 20 reais\n", notas_20);
    printf("%d nota(s) de 10 reais\n", notas_10);
    printf("%d nota(s) de 5 reais\n", notas_5);
    printf("%d nota(s) de 2 reais\n", notas_2);

}