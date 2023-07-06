#include <stdio.h>

void Soma (float a, int b){
    float resultado;
    resultado=a+b;
    printf("A soma de %6.3f com %d é %6.3f\n",a,b,resultado);
}

int main(){
    float a;
    int b;
    a=12.3;
    b=10;
    Soma(a,b);
    return 0;
}