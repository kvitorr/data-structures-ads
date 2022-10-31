#include "./lista_estatica_ordenada.hpp"
#include <iostream>
using namespace std;

int main(){

    Lista a = NULL;

    ins(1, &a);
    ins(0, &a);
    ins(1, &a);
    ins(2, &a);
    ins(3, &a);


    exibe(a);



}