#include <iostream>
using namespace std;

void bubbleSort(float v[], int tamanho);

int main(void){

    float number1, number2, number3;

    cout << "Digite tres numeros separados por espacos: ";
    cin >> number1 >> number2 >> number3;

    float vetor[] = {number1, number2, number3};

    bubbleSort(vetor, 3);

    for (int i = 0; i < 3; i++){
        cout << *(vetor+i) << " ";
    }
}

void bubbleSort(float v[], int tamanho){
    int i, j, index_atual;
    float auxiliar;

    for(i = 0; i < tamanho - 1; i++){
        for(j = 0; j < tamanho - 1 - i; j++){
            if(v[j] > v[j+1]){
                auxiliar = v[j];
                v[j] = v[j+1];
                v[j+1] = auxiliar;
            }
        }
    }
}