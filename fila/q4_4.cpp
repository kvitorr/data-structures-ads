#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


typedef int Itemp;

class No {
    public:
        Itemp conteudo;
        No *prox;
        No (Itemp n){
            conteudo = n;
            prox = NULL;
        };
};


class Fila {
    public:
        No *inicio;
        No *fim;

        Fila(){
            inicio = NULL;
            fim = NULL;
        };

        void push(Itemp elemento){
            No *estrutura = new No(elemento);

            if(filaVazia()){
                inicio = estrutura; //recebendo endereço
            } else {
                fim->prox = estrutura; //modificando o prox do antigo nó final
            }
                fim = estrutura;
        }

        Itemp pop(){
            Itemp content = inicio->conteudo;
            No *intermediated = inicio; //vai fazer referencia ao primeiro elemento da fila
            inicio = inicio->prox;

            free(intermediated);

            if(inicio == fim){
                fim = NULL;
            }
            return content; 
        }

        bool filaVazia(){
            return (inicio == NULL);
        }

        void destroiPilha(){
            while(!filaVazia()){
                pop();
            }
            free(fim);
            free(inicio);
        }
};

int main(){

    /*
    Resposta: Os processos terminarão na seguinte ordem: Processo 25, Processo 46, Processo 17 e Processo 39
    */

    Fila *fila1 = new Fila();

    fila1->push(17);
    fila1->push(25);
    fila1->push(39);
    fila1->push(46);

    int x, p, t, calc;

    while(!fila1->filaVazia()){
        x = fila1->pop();
        //printf("\nProcesso %d ", x);
        p = x/10;
        t = x%10;

        if(t>3) {
            calc = p*10+(t-3);
            fila1->push(calc);
                    //printf(" atual %d", calc);

        } else {
            printf("Processo %d concluido\n", p);
        }
    }

};


