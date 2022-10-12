#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 


Aluno lista_alunos[30];
int qtd_de_elementos = 0;
int indice_vazio = 0;

void incluirDesordenado(Aluno e, Aluno *lista){
	if(qtd_de_elementos != 30){
		lista[indice_vazio] = e;
		qtd_de_elementos++;
		indice_vazio++;
	} else {
		cout << "Lista cheia" << endl;
	}
}

//retorna a posicao do elemento procurado
int procuraIndice(int mat, Aluno *lista){	
	for(int i = 0; i < qtd_de_elementos; i++){
		if(mat == lista[i].mat){
			return i;
		}
	}

	return -1; //se não encontrar o aluno
}

//recebe a posicao e imprime o elemento na tela
void mostrar(int pos, Aluno *lista){ // não ta base indexada, ou seja, quero o primeiro elemento da lista, digito 1.
	
	if(pos <= qtd_de_elementos){
		cout << "Aluno: " << lista[pos-1].nome << "\n" << "Matricula: " << lista[pos-1].mat << endl;
	} else {
		cout << "Erro: Posicao inexistente." << endl;
	}
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(int mat, Aluno *lista){	
	bool naoEncontrado = true;
	for(int i = 0; i < qtd_de_elementos; i++){
		if(mat == lista[i].mat){
			cout << "Aluno: " << lista[i].nome << "\n" << "Matricula: " << lista[i].mat << endl;
			naoEncontrado = false;
		}
	}
	if(naoEncontrado){
		cout << "Aluno com matricula " << mat << "nao encontrado" << endl;
	}
}

//estrat�gia 1: colocar o ultimo elemento da lista na posi��o do elemento removido
void removerSubstituindo(aluno a, Aluno *lista){
	if(qtd_de_elementos == 0){
		cout << "Erro: Lista vazia." << endl;
	} else if (qtd_de_elementos == 1) {
		cout << "Erro: nao eh possivel realizar remocao por substituicao. Lista possui apenas um aluno." << endl;
	} else {
		int indice = procuraIndice(a.mat, lista);
		if(indice != -1){
			lista[indice].mat = lista[qtd_de_elementos-1].mat;
			lista[indice].nome =  lista[qtd_de_elementos-1].nome;
			qtd_de_elementos--;
			indice_vazio--;
		} else {
			cout << "Erro: item selecionado para remocao nao existe." << endl;
		}
	}
}

//estrat�gia 2: mover TODOS os elementos que est�o AP�S  o elemento que deve ser removido UMA POSI��O A FRENTE.
void removerMovendo(Aluno a, Aluno *lista){
	if(qtd_de_elementos == 0){
		cout << "Erro: Lista vazia." << endl;
	} else {
		int indice = procuraIndice(a.mat, lista);

		if(indice != -1){
			qtd_de_elementos--;
			indice_vazio--;
			for(int i = 0; i < qtd_de_elementos; i++){
				lista[indice+i].mat = lista[indice+i+1] .mat;
				lista[indice+i].nome = lista[indice+i+1].nome;
			}
		} else {
			cout << "Erro: item selecionado para remocao nao existe." << endl;
		}
	}
}

main(){
	/*
	cout << qtd_de_elementos << endl; //0
	cout << indice_vazio << endl; //0

	Aluno vitor;
	vitor.mat = 1;
	vitor.nome = "Vitor";

	Aluno ricardo;
	ricardo.mat = 2;
	ricardo.nome = "Ricardo";

	removerMovendo(vitor);  //lista vazia
	removerSubstituindo(vitor); // lista vazia

	
	incluirDesordenado(vitor);
	incluirDesordenado(ricardo);

	cout << qtd_de_elementos << endl; //2
	cout << indice_vazio << endl; //2

	mostrar(1); //vitor
	mostrar(2); //ricardo

	consultar(1); //vitor
	consultar(2); //ricardo

	/*removerSubstituindo(vitor);
	cout << qtd_de_elementos << endl; //1
	cout << indice_vazio << endl; //1

	removerMovendo(vitor);
	cout << qtd_de_elementos << endl; //1
	cout << indice_vazio << endl; //1

	mostrar(1); //ricardo
	*/
	
}

