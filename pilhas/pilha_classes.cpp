#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

typedef char Itemp;

class No{
	public:
		Itemp nome;
		No *prox;
		No(Itemp n){
			nome = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;
		
		Pilha(){ 
			topo = NULL;
		}
		
		void push(Itemp n){
			No *elemento = new No(n); //new gera uma alocação de memória, portanto precisamos da criação de um ponteiro
			elemento->prox = topo;

			topo = elemento;
		}
		
		Itemp pop(){
			Itemp conteudo = topo->nome;
			No *elementPop = topo;
			topo = elementPop->prox;
			free(elementPop);
			elementPop = NULL;

			return conteudo;
		}
		
		bool isEmpty(){
			return (topo == NULL);
		}	

		void apagarPilha(){
			while(!(isEmpty())){
				pop();
			}

			free(topo);
			cout << "pilha apagada" << endl;
		}
};

int main(){
	int option;
	Pilha *pilha = new Pilha();

	pilha->push('v');
	pilha->push('i');

	cout << pilha->topo << endl; //primeiro elemento -> proximo apontando para nulo

	pilha->apagarPilha();





	/*
	pilha->push('i');
	pilha->push('t');
	pilha->push('o');
	pilha->push('r');

	cout << "press enter to continue: ";
	cin >> option;

	pilha->apagarPilha(pilha);

	cout << pilha->topo->prox << endl;
	*/
}