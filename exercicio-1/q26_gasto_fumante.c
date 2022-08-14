#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int anos_fumando, num_cigarros_diario, preco_carteira, dinheiro_gasto, qtd_de_carteiras;

    printf("Quantos anos fumando cigarro? ");
    scanf("%d", &anos_fumando);

    printf("Quantos cigarros por dia? ");
    scanf("%d", &num_cigarros_diario);

    printf("Preco da carteira de cigarro em reais: ");
    scanf("%d", &preco_carteira);

    qtd_de_carteiras = (anos_fumando*365*num_cigarros_diario)/20;

    dinheiro_gasto = qtd_de_carteiras * preco_carteira;

    printf("Dinheiro gasto fumando: %d reais", dinheiro_gasto);
}