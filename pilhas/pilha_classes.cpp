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

			return conteudo;
		}
		
		bool isEmpty(){
			return (topo == NULL);
		}	

		void apagarPilha(Pilha *p){
			while(!(p->isEmpty())){
				p->pop();
			}
			free(p);
			free(topo);
			cout << "pilha apagada";
		}
};

int main(){
	int option;
	Pilha *pilha = new Pilha();

	pilha->push('v');
	pilha->push('i');
	pilha->push('t');
	pilha->push('o');
	pilha->push('r');

	cout << "press enter to continue";
	cin >> option;

	pilha->apagarPilha(pilha);
	pilha->push('r');

	cout << pilha->isEmpty() << endl;
}
