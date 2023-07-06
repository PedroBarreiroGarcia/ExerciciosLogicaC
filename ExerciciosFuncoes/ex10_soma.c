#include <stdio.h>

void Soma(float a, int b);

void main(){
    float f=20.7;
    Soma(16,f);
    return 0;
}

void Soma (float a, int b){
    float resultado;
    resultado=a+b;
    printf("A soma de %6.3f com %d é %6.3f\n",a,b,resultado);
}