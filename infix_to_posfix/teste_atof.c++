#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char string[] = "1.756 %254";

    double numero = atof(string);

    cout << numero +1;

    return 0;
}