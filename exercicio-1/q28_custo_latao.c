#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    float qtd_de_latao, qtd_de_cobre, qtd_de_zinco;

    printf("Digite a quantidade de latao requerida em kg: ");
    scanf("%f", &qtd_de_latao);

    qtd_de_cobre = qtd_de_latao*0.7;
    qtd_de_zinco = qtd_de_latao*0.3;

    printf("Para %.2f kg de latao e necessario: %.2f kg de cobre e %.2f kg de zinco",qtd_de_latao, qtd_de_cobre, qtd_de_zinco);
}