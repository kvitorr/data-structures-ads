Item ultimo(Lista L){
    if(L->prox == NULL) return L->item;
    else return ultimo(L->prox);
}
