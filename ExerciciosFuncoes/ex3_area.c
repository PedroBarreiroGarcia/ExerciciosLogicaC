#include <stdio.h>
// 3.- Escreva uma função que calcula a área – argumentos largura e altura.

int validaEntrada(){
    int x;
    do{
        printf("digite: ");
        scanf("%d",&x);
        if(x<0){
            printf("Entrada invalida!");
        }
    }while(x<0);
}

int area(int l, int a){
    printf("A area e de: %d",l*a);
}

int main(){
    int l,a;
    printf("Calculadora de area\n");
    printf("Entre com a Largura: ");
    l= validaEntrada();
    printf("Entre com a Altura: ");
    a= validaEntrada();
    area(l,a);
    return 0;
}