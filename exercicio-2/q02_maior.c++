#include <iostream>
using namespace std;


float biggestNumber(float number1, float number2, float number3);

int main(void){

    float number1, number2, number3, maior;

    cout << "Digite tres numeros separados por espacos: ";
    cin >> number1 >> number2 >> number3;

    maior = biggestNumber(number1, number2, number3);

    cout << "Maior: " << maior;
}

float biggestNumber(float number1, float number2, float number3) {
    if(number1 > number2){
        if(number2 > number3) {
            return number1;
        } else if (number3 > number1){
            return number3;
        } else {
            return number1;
        }
    } else {
        if(number1 > number3){
            return number2;
        } else if(number3 > number2){
            return number3;
        } else {
            return number2;
        }
    }
}