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
		No(int m,string n){
			mat=m;
			nome = n;		
			prox = NULL;
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
			No *novo= new No(m,n);

			if (fim == NULL){
				inicio = novo;
				fim = novo;
			} else {
				fim->prox = novo;
				fim = novo;
			}
		}
		
			
		int lst_vazia(){
			return (inicio==NULL);
		}
		void addToInicio(int m, string n){
			No *novo_no = new No(m, n);
			novo_no->prox = inicio;
			inicio = novo_no;
			
			if(this->lst_vazia()){
				fim = novo_no;
			}
		}


		void listar(){
			if (lst_vazia()){
				cout<<"\nLista vazia!!!";
			} else {
				No *novo_no = inicio;

				cout << "Lista de Alunos:" << endl;

				while(novo_no != NULL){
					cout << endl;
					cout << "Nome: " << novo_no->nome << endl;
					cout << "Matricula: " << novo_no->mat << endl;
					novo_no = novo_no->prox;
				}
			}
		}

		int consultar(int mat){
			if(this->lst_vazia()){
				cout << "Lista vazia..." << endl;
			} else {
				No *novo_no = inicio;
				while(novo_no != NULL){
					if(novo_no->mat == mat){
						cout << endl;
						cout << "Nome: " << novo_no->nome << endl;
						cout << "Matrícula: " << novo_no->mat << endl;
						return 1; //se encontrar
					}
					novo_no = novo_no->prox;
				}
				cout << "Aluno de matricula " << mat << "nao encontrado" << endl; 
				return 0; //se não encontrar
			}
		}
						
		
		
		int remover(int mat){
			 if(this->lst_vazia()){
				cout << "Lista vazia..." << endl;
			 } else {

				No *novo_no = inicio;
				No *anterior = NULL;

				while(novo_no != NULL){
					if(novo_no->mat == mat){
						if(fim == novo_no){
							fim = anterior;
						}
						anterior->prox = novo_no->prox;
						free(novo_no);
						return 1;
					}
					anterior = novo_no;
					novo_no = novo_no->prox;
				}
				cout << "Elemento de matricula" << mat << "nao encontrado" << endl;
			 }
			 return 0;
		}
		
		void removeTodos(){
			No *atual = inicio;
			No *proximo = NULL;
			while (atual != NULL){
					proximo=atual->prox;
					cout<<"\n Apaga:"<<atual->nome;
					free(atual);
					atual=proximo;						
			}
			inicio = atual;
			fim = atual;
		}
		
		// criar uma nova lista que seja o inverso da primeira
		void crialistainversa(){
				
		}
		
		//inverter a propria lista
		void listaInvertida(){
			if(this->lst_vazia()){
				cout << "Lista vazia..." << endl;
			} else {
				No *novo_no = inicio;
				No *prox = novo_no->prox;

				No *anterior = NULL;
				novo_no->prox = NULL;
				fim = inicio;

				while(prox != NULL){
					anterior = novo_no;
					novo_no = prox;
					prox = novo_no->prox;

					novo_no->prox = anterior;

					if(prox == NULL) {
						inicio = novo_no;
					}
				}

			}
		}
};

main(){
  	Lista *l = new Lista();
  	l->addToFinal(1,"Joao");
	l->addToFinal(2,"Gabriela");
  	l->addToFinal(3,"Fabiola");
  	l->addToInicio(5,"Joana Oliveira");
  	l->addToInicio(6,"Cristiano Oliveira");
  	//l->listar();

	cout << endl;

  	l->listaInvertida();

	//cout << l->inicio->nome << endl;
	//cout << l->fim->nome << endl;
	
	//l->listar();

	l->listaInvertida();

	cout << endl;

	l->listar();
}
