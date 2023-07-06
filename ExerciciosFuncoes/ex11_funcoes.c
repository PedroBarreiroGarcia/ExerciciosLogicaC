#include <stdio.h>

void Func1(){
    int b=-100;
    printf("Valor de B dentro da Func1: %d\n", b);
}

void Func2(){
    int b=-200;
    printf("Valor de B dentro da Func2: %d\n", b);
}

void main(){
    int b=10;
    printf("Valor de B: %d\n",b);
    b=20;
    Func1();
    printf("Valor de B: %d\n",b);
    b=30;
    Func2();
    printf("Valor de B: %d\n",b);
    return 0;
}
