#include <stdio.h>
#include <stdlib.h>


int biggestValue(int *numeros);
int lowestValue(int *numeros);


int main(void){
    int i;
    int numeros[3];

    for(i = 1; i <= 3; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &numeros[i]);
    }


    int maior = biggestValue(numeros);
    int menor = lowestValue(numeros);

    printf("%s", "Maior valor: ");
    printf("%d\n", maior);
    printf("%s", "Menor valor: ");
    printf("%d", menor);

    return 0;
}


int biggestValue(int *numeros){
    int i;
    int ma = numeros[0];

    for(i = 1; i < 3; i++){
        if (ma < numeros[i]){
            ma = numeros[i];
        }
    }
    printf("\n%d", ma);

    return ma;
}

int lowestValue(int *numeros){
    int i;
    int me = numeros[0];

    for(i = 1; i < 3; i++){
        if (me > numeros[i]){
            me = numeros[i];
        }
    }
    printf("\n%d", me);

    return me;
}