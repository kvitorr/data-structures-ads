#include <stdio.h>
#include <math.h>   

main(){
    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float media_ponderada;

    printf("Digite a nota 1 e seu peso, separados por espaco: ");
    scanf("%f %f", &nota1, &peso1);

    printf("Digite a nota 2 e seu peso, separados por espaco: ");
    scanf("%f %f", &nota2, &peso2);

    printf("Digite a nota 3 e seu peso, separados por espaco: ");
    scanf("%f %f", &nota3, &peso3);
    
    media_ponderada = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);
    
    printf("Media ponderada: %.2f", media_ponderada);
}
