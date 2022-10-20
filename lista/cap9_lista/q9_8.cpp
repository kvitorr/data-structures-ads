Item enesimo(int n, Lista L){
    if(L == NULL) return "Fatal error";
    if(n == 1) return L->item;
    else return enesimo(n-1, L->prox);
}