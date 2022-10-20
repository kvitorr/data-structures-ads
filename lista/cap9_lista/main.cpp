#include <iostream>
#include "./lista.hpp"
using namespace std;

int main(){

//1, 2, 1, 4, 1

    Lista I = no("b", no("o", no("b", no("o", NULL))));
    Lista J = no("b", no("o", no("b", no("o", NULL))));
    Lista K = no("b", no("a", no("b", no("a", NULL))));

    cout << igual(I, J) << " " << igual(I, K) << " " << igual(J, K) << endl;


    return 0;
}