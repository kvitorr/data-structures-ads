void substitui(string x, string y, Lista *L){
    if((*L) == NULL) return;
    if((*L)->item == x) {
        (*L)->item = y;
        return substitui(x, y, &(*L)->prox);
    } else return substitui(x, y, &(*L)->prox);
}