int soma(Lista L){
    if(L->prox == NULL) return L->item;
    else return L->item + soma(L->prox);
}