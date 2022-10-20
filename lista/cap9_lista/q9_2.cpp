

int ocorrencias(Item x, Lista L){
    if(L == NULL) return 0;
    if(x == L->item) return 1 + ocorrencias(x, L->prox);
    else return 0 + ocorrencias(x, L->prox);
}
