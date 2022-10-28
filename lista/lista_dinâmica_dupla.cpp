#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
class No{
	public:
		int mat;
		string nome;
		No *prox;
		No *ant;
		No(int m,string n){
			mat = m;
			nome = n;
			prox=NULL;
			ant=NULL;
		}
};

class Lista{
	public:
		No *inicio;
		No *fim;
	
	    Lista(){
	    	inicio = NULL;
	    	fim = NULL;
		}	
		void addToFinal(int m, string n){
			No *novo = new No(m, n);

			if(inicio == NULL && fim == NULL){
				inicio = novo;
				fim = novo;
			} else {
				novo->ant = fim;
				fim->prox = novo;
				fim = novo;
			}
		}
		
		void addToIni(int m, string n){
			No *novo = new No(m, n);

			if(inicio == NULL && fim == NULL){
				inicio = novo;
				fim = novo;
			} else {
				novo->prox = inicio;
				inicio->ant = novo;
				inicio = novo;
			}
		}
		
		void addOrd(int m, string n){
			No *novo = new No(m, n);
			No *atual = inicio;

			if(inicio == NULL && fim == NULL){
				inicio = novo;
				fim = novo;
			} else if (novo->mat < inicio->mat){
				this->addToIni(novo->mat, novo->nome);
			} else if (novo->mat > fim->mat){
				this->addToFinal(novo->mat, novo->nome);
			} else {
				
				while(novo->mat > atual->mat && atual != NULL){
					atual = atual->prox;
				}

				if(atual == NULL){
					this->addToFinal(novo->mat, novo->nome);
				} else {
					novo->ant = atual->ant;
					atual->ant->prox = novo;
					atual->ant = novo;
					novo->prox = atual;
				}

			}
		}
		
		//mostra todos os elementos do inicio ao final da lista
		void mostraIniFim(){
			No *atual = inicio;	
				cout << endl;
				cout << "--- Alunos ---" << endl;

				if(atual == NULL && fim == NULL){
					cout << "Lista vazia" << endl;
				}

			while(atual != NULL){
				cout << "Nome: " << atual->nome << endl;
				cout << "Matricula: " << atual->mat << endl;
				cout << endl;

				atual = atual->prox;
			}
		}
		
		// mostra todos os elementos do final ao inicio da lista
		void mostraFimIni(){
			No *atual = fim;	
				cout << endl;
				cout << "--- Alunos ---" << endl;

					if(atual == NULL && fim == NULL){
					cout << "Lista vazia" << endl;
				}

			while(atual != NULL){
				cout << "Nome: " << atual->nome << endl;
				cout << "Matricula: " << atual->mat << endl;
				cout << endl;

				atual = atual->ant;
			}	
		}
		
		int removerFinal(){
			No *noRemover;
			noRemover = fim;

			if(inicio == NULL && fim == NULL){
				return 0;
			}

			if(fim->prox == NULL && fim->ant == NULL){
				fim = NULL;
				inicio = NULL;
				free (noRemover);
			} else {
				fim = fim->ant;
				fim->prox= NULL;

				noRemover->ant = NULL;
				free(noRemover);
			}

			return 1;
		}
		
		int removerInicio(){
			No *noRemover;
			noRemover = inicio;

			if(inicio == NULL && fim == NULL){
				return 0;
			}

			if(inicio->prox == NULL && inicio->ant == NULL){						
				fim = NULL;
				inicio = NULL;

				free (noRemover);
			} else {
				inicio = inicio->prox;
				inicio->ant= NULL;

				noRemover->prox = NULL;
				free(noRemover);
			}

			return 1;
		}


		int remover(int m){
			No *atual = inicio;

			if(inicio == NULL && fim == NULL){
				return 0;
			}

			while(atual->mat != m){
				atual = atual->prox;

				if(atual == NULL){
					break;
				}
			}

			if(atual == NULL) {
				cout << "Matricula invalida" << endl;
			} else if(inicio->mat == m){
				this->removerInicio();
			} else if(fim->mat == m){
				this->removerFinal();
			} else {
				if(atual->prox == NULL && atual->ant == NULL){
					inicio = NULL;
					fim = NULL;

					free(atual);
				} else {
					atual->ant->prox = atual->prox;
					atual->prox->ant = atual->ant;

					atual->prox = NULL;
					atual->ant = NULL;
					free(atual);
				}
			}
			
			return 1;
    	}

};


main(){
	Lista *l=new Lista();
   
	l->addToFinal(001, "Vitor");
	l->addToFinal(002, "Ricardo");
	l->addToFinal(004, "Silvano");
	l->addOrd(003, "Altaci");
	l->addOrd(000, "Leonardo");
	l->mostraIniFim();

	l->removerFinal();
	l->mostraIniFim();

	l->removerInicio();
	l->mostraIniFim();

	l->remover(2);
	l->remover(666);
	l->remover(1);
	l->mostraIniFim();

	l->remover(3);
	l->mostraIniFim();

	cout << l->fim << l->inicio << endl;
}
