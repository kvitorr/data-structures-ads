#include <iostream>
using namespace std;




typedef char Itemp;

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
            return content; 
        }

        bool filaVazia(){
            return (inicio == NULL);
        }
};


int main(){

    Fila *fila1 = new Fila();

    fila1->push('v');
    fila1->push('i');
    fila1->push('t');
    fila1->push('o');
    fila1->push('r');

    while(!(fila1->filaVazia())){
        cout << fila1->pop();
    }


};