#include <stdio.h>
//3.- Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço. 
int main(){
    int a, b, *pa, *pb;
    a=1;
    b=2;
    pa= &a;
    pb= &b;
    printf("O endereco de a: %x\n", pa);
    printf("O endereco de b: %x\n", pb);

    if(pa > pb){
        printf("O maior endereco e o de A: %x", pa);
    }
    else{
        printf("O maior endereco e o de B: %x", pb);
    }
    return 0;
}