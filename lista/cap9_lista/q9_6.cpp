void substitui(Item x, Item y, Lista *L){
    if((*L) == NULL) return;
    if((*L)->item == x)(*L)->item = y;
    
    return substitui(x, y, &(*L)->prox);
}
