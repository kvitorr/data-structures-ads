bool igual(Lista A, Lista B){
    if(A == NULL && B == NULL) return true;
    if(A->item == B->item) return igual(A->prox, B->prox);
    else return false;
}