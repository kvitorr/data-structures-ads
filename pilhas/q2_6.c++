#include <iostream>
#include "./pilha1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
using namespace std;




/*
Os elementos guardados na pilha são do tipo char *, ou seja, estão armazenando
endereços de memória de uma variável do tipo char.

Portanto, no primeiro for do programa, estamos armazenando três vezes o endereço
de memória o vetor de caracteres s[11].

Ou seja, quando dermos pop(p), o output será a três vezes o último valor armazenado
no vetor s[11].


Output:
tres
tres
tres

*/

int main(){

    Pilha p = pilha(5);
    char s[11];

    char* palavra;

    for(int i = 1; i <= 3; i++) {
        printf("? ");
        cin >> s;
        push(s, p);
    }

    while(!pilhaVazia(p)){
        cout << pop(p) << endl;
    }
return 0;



}