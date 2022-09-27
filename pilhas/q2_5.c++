#include <iostream>
#include "./pilha1.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <string>
#include <cstring>
using namespace std;

bool estaBalanceada(string teste){
    int qtd_de_caracteres = teste.length(); 
    Pilha aberta = pilha(qtd_de_caracteres);

    for(int i = 0; i < qtd_de_caracteres; i++){
        if(teste[i] == '[' || teste[i] == '{' || teste[i] == '(') push(teste[i], aberta);
        if(teste[i] == ']'){
            if(!(pop(aberta) == '[')) return false;
        } else if(teste[i] == '}'){
           if(!(pop(aberta) == '{')) return false;
        } else if(teste[i] == ')'){
            if(!(pop(aberta) == '(')) return false;
        }
    }
    return pilhaVazia(aberta);
}

int main(){
    string teste = "{[([{])]}"; // Balanceadas: "[{()()}{}]" "{[([{}])]}"; Desbalanceadas: {[(}]} {[)()(]} 

    if(estaBalanceada(teste)){
        cout << "Balanceada";
    } else cout << "Desbalanceada";    
}