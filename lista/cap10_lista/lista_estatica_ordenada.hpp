#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//#define fmt "%d"
typedef int Item;

typedef struct no {
    Item item;
    struct no *prox;
} *Lista;

Lista no(Item x, Lista p){
    Lista n = (Lista)malloc(sizeof(struct no));
    n->item = x;
    n->prox = p;
    return n;
}

void exibe(Lista L){
    cout << "[";
    while(L != NULL){

        if(L->prox != NULL) cout << L->item << ",";
        else cout << L->item;
        L = L->prox;
    }
    cout << "]" << endl;
}

void anexa(Lista *A, Lista B) { //passagem por referencia e por valor
    if(B == NULL) return;
    while(*A != NULL) A = &(*A)->prox;
    *A = B;
}

void destroi(Lista *L){ //pointer to pointer
    while(*L != NULL){
        Lista n = *L;
        *L = n->prox;
        free(n);
    }
}

int tam(Lista L){
    if(L == NULL) return 0;
    return 1 + tam(L->prox);
}

int pert(Item x, Lista L){
    if(L == NULL) return 0;
    if(x == L->item) return 1;
    return pert(x, L->prox);
}

Lista clone(Lista L) {
    if(L == NULL) return NULL;
    return no(L->item, clone(L->prox));
}

void exibe_inv(Lista L){
    if(L == NULL) return;
    exibe_inv(L->prox);
    cout << L->item << " ";
}

int ocorrencias(Item x, Lista L){
    if(L == NULL) return 0;
    if(x == L->item) return 1 + ocorrencias(x, L->prox);
    else return 0 + ocorrencias(x, L->prox);
}

Item ultimo(Lista L){
    if(L->prox == NULL) return L->item;
    else return ultimo(L->prox);
}
/*
int soma(Lista L){
    if(L->prox == NULL) return L->item;
    else return L->item + soma(L->prox);
}
*/

void substitui(Item x, Item y, Lista *L){
    if((*L) == NULL) return;
    if((*L)->item == x)(*L)->item = y;
    
    return substitui(x, y, &(*L)->prox);
}

bool igual(Lista A, Lista B){
    if(A == NULL && B == NULL) return true;
    if(A->item == B->item) return igual(A->prox, B->prox);
    else return false;
}

/*
Item enesimo(int n, Lista L){
    if(L->prox == NULL) return "Fatal error";
    if(n == 1) return L->item;
    else return enesimo(n-1, L->prox);
}*/

void ins(Item x, Lista *L){
	while(*L != NULL && (*L)->item < x ) L = &(*L)->prox;
	*L = no(x, *L); //*L estará armazenando o endereço do restante da lista, por isso 
                    //os itens são inseridos corretamente.
}

int em(Item x, Lista L){
    while(L != NULL && L->item < x) L = L->prox;
    return (L != NULL && L->item == x);
}

void insSR(Item x, Lista *L){
    if(!em(x, *L)){
        while(*L != NULL && (*L)->item < x ) L = &(*L)->prox;
	    *L = no(x, *L); 
    } else {
        cout << "Item nao inserido, ja existente na lista" << endl;
    }
}