#include <stdio.h>
#include <stdlib.h>

typedef int Itemp;

typedef struct pilha{
	Itemp item;
	struct pilha *prox;	
} Pilha;

Pilha *topo = NULL;

Pilha* No(Itemp valor){
	Pilha *n = (Pilha*)malloc(sizeof(Pilha));
	n->item=valor;
	n->prox=NULL;
	topo = n;
	return n;	
}

void push(Itemp n){
	Pilha *novo = No(n);
	if(topo == NULL){
		topo = novo;
	}else{
		novo->prox = topo;
		topo = novo;
	}
}
		
Itemp pop(){
	Pilha *atual;
	atual = topo;
	
	if(topo != NULL) {
		topo = (topo->prox);
		return (atual->item);
	}
}

bool pilhaVazia(){
	return (topo == NULL);
}
		
Itemp getTopo(){
	return topo->item;
}
		

		



