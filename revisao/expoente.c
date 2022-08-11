#include <stdio.h>

int pot(int base, int expoente){
    int res = 1;
    int i;

    for(i = 0; i < expoente; i++){
        res = res * base;
    }
    return res;
}



int main(void){
    int base, exp;
    scanf("%d %d", &base, &exp);
    printf("%d\n", pot(base, exp));

    return 0;
}