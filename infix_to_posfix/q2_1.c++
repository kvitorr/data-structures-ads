#include <iostream>
#include <string.h>
#include "pilha1.h"
using namespace std;




int prioridade (char o) {
    switch (o)
    {
    case '(': return 0;
    case '+': return 1;
    case '-': return 1;
    case '*': return 2;
    case '/': return 2;
    }
    return -1; //operador inválido
}

int getResultPosfix (char *e) {

    Pilha P = pilha(256);
    for(int i = 0; e[i]; i++){
        if(isdigit(e[i]))
            push(e[i] - '0', P); //converte um dígito em um número inteiro, dessa forma
                                // não vai concatenar
        else {
            int y = pop(P);
            int x = pop(P);
            switch(e[i]){
                case '+': push(x+y, P); break;
                case '-': push(x-y, P); break;
                case '*': push(x*y, P); break;
                case '/': push(x/y, P); break;
            }
        }    
    }

    int z = pop(P);
    //destroi(&P);
    return z;
}

char* getPosfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha T = pilha(256);

    for(int i = 0; e[i]; i++){
        if(e[i] =='('){
            push(e[i], T);
                //printf("1");
        } else if (isdigit(e[i])){
            s[j++] = e[i];
                //printf("2");

        } else if (strchr("+-/*", e[i])) {
                //printf("3");
            while(!pilhaVazia(T) && (prioridade(getTopo(T)) >= prioridade(e[i]))){
                s[j++] = pop(T);
                    //printf("4");
            }
            push(e[i], T);
        }
        else if (e[i] == ')') {
                //printf("5");
            while(getTopo(T) != '('){
                s[j++] = pop(T);
                //printf("6");
            }
            pop(T);
        }
            //printf("7");
    }
    
    while(!pilhaVazia(T)){
                //printf("8");
            s[j++] = pop(T);
                //printf("9");
        }
    s[j] = '\0';
    //destroi(&P);
    return s;
}


int main(){

    char infixa[256];
    printf("Digite uma expressao infixa: ");
    scanf("%s", &infixa);


    char *posfixa = getPosfixa(infixa);
    int valor = getResultPosfix(posfixa);

    printf("\n%s\n", posfixa);

    printf("%d", valor);

    return 0;
}