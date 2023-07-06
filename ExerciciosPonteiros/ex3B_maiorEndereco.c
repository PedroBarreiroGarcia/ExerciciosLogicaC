#include <stdio.h>
// 3. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
int main(){
    int a, b, *pa, *pb;
    printf("Insira o valor da variavel a:  \n");
    scanf("%d",&a);
    printf("Insira o valor da variavel b:  \n");
    scanf("%d",&b);
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