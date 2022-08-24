#include <iostream>
using namespace std;


typedef struct { char valor[10]; } Str;

int main(void){

    char s[3] = "um";
    char t[3] = "um";

    printf("0x%x\n", s);
    printf("0x%x\n", &s[0]);
    printf("%c\n\n", s[0]);

    printf("0x%x\n", t);
    printf("0x%x\n", &t[0]);
    printf("%c\n\n", t[0]);


    if(s == t) puts("iguais");
    else puts("diferentes");
           
    return 0;
}