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
    
    int qtd_de_numeros, indice_maior;
    float numero, maior;
    printf("Quantos numeros a pilha tera? ");
    scanf("%i", &qtd_de_numeros);

    Pilha A = pilha(qtd_de_numeros);
    Pilha B = pilha(qtd_de_numeros);


    printf("Preencha a pilha com %i numeros: ", qtd_de_numeros);


    for(int i = 0; i < qtd_de_numeros; i++){
        scanf("%f", &numero);
        push(numero, A);
    }


    for(int i = 0; i < qtd_de_numeros; i++){
        indice_maior = 0;
        maior = A->item[0];

        for(int j = 0; j < qtd_de_numeros - i; j++){

            if(A->item[j] > maior){
                indice_maior = j;
                maior = A->item[j];
                cout << "\n" << indice_maior << maior << endl; 
            }
        }

        for(int k = 0; k < qtd_de_numeros - indice_maior - i; k++){
            push(pop(A), B);
        }
        pop(B);


        for(int v = 0; v < (qtd_de_numeros - indice_maior - i - 1); v++){
            push(pop(B), A);
        }
        push(maior, B);
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        cout << pop(B) << " ";
    }

    return 0;
}