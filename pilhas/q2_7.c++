#include <iostream>
#include "./pilha1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
using namespace std;



int main(){

    Pilha p = pilha(5);
    char s[11];

    char* palavra;

    for(int i = 1; i <= 3; i++) {
        printf("? ");
        cin >> s;
        palavra = strdup(s); //realiza uma alocação de memória adequada para a string
        push(palavra, p);
    }

    while(!pilhaVazia(p)){
        cout << pop(p) << endl;
    }
return 0;



}