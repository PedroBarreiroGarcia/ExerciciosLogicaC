#include <stdio.h>

void Soma(float a, int b);

void main(){
    Soma(16.7,15);
    return 0;
}


void Soma (float a, int b){
    float resultado;
    resultado=a+b;
    printf("A soma de %6.3f com %d é %6.3f\n",a,b,resultado);
}