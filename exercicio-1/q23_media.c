#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    float nota1, nota2, nota3;
    float media;

    printf("Digite tres notas separadas por vírgula: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Media: %.2f", media);
}