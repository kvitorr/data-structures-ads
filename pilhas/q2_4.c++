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
    int numero, maior;
    printf("Quantos numeros a pilha tera? ");
    scanf("%i", &qtd_de_numeros);

    Pilha A = pilha(qtd_de_numeros);
    Pilha B = pilha(qtd_de_numeros);


    printf("Preencha a pilha com %i numeros: ", qtd_de_numeros);


    for(int i = 0; i < qtd_de_numeros; i++){ //preenche pilha
        scanf("%d", &numero);
        push(numero, A);
    }


    for(int i = 0; i < qtd_de_numeros; i++){
        indice_maior = 0;
        maior = A->item[0];

        for(int j = 0; j < qtd_de_numeros - i; j++){ //encontra o maior número e seu índice

            if(A->item[j] > maior){
                indice_maior = j;
                maior = A->item[j];
            }
        }

        for(int k = 0; k < qtd_de_numeros - indice_maior - i; k++){ //vai preencher a pilha B com todos os número da pilha A
            push(pop(A), B);                                        //e vai parar quando enviar o maior número para a pilha B
        }                                                           //qtd_de_numeros - indice_maior = inverte a lógica do array FIFO
                                                                    // - i = a cada iteração um número está sendo tirado da pilha A
                                                                    // e está sendo armazenada na pilha B, então não posso percorrer
                                                                    //todo o vetor
        
        pop(B); // retiro o maior número da pilha B


        for(int v = 0; v < (qtd_de_numeros - indice_maior - i - 1); v++){ //Preencho a pilha A com todos os números da pilha B
            push(pop(B), A);                                              //- 1 = o numero maior da pilha A já foi retirado
        }
        push(maior, B); //Armazeno o maior item encontrado, na pilha B. 
    }

/*
    for(int i = 0; i < qtd_de_numeros; i++){
        cout << pop(B) << " ";
    }
*/


    for(int i = 0; i < qtd_de_numeros; i++){
        push(pop(B), A);
    }

    for(int i = 0; i < qtd_de_numeros; i++){
        cout << pop(A) << " ";
    }


    return 0;
}