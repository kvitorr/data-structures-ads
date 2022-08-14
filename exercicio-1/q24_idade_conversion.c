#include <stdio.h>
#include <math.h>
#include <conio.h>

main(){
    int anos, meses, dias, total_idade;

    printf("Digite a idade expressa em anos, meses e dias, respectivamente, separados por espaço (5 10 6) : ");
    scanf("%d %d %d", &anos, &meses, &dias);

    total_idade = anos * 365 + meses * 30 + dias;

    printf("%d dias de idade", total_idade);
}