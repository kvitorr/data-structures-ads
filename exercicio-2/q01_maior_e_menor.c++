#include <iostream>

using namespace std;

int main(void){

    float number1, number2, maior, menor;

    cout << "Digite dois numeros separados por um espaco: ";
    cin >> number1 >> number2;

  if(number1 > number2) {
    maior = number1;
    menor = number2;

  } else {
    maior = number2;
    menor = number1;
  }

      cout << "Maior: " << maior << " Menor: " << menor;

   return 0;
 }