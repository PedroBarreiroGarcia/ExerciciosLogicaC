// 8.- Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

#include <stdio.h>

int main(){
    int a[5], *pa;
    printf("Alimente o vetor de 5 posicoes inteiros\n");

    for(int i=0; i<5; i++){
        printf("Insira o elemento %d: \n", i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        pa=&a[i];
        if(a[i]%2==0){
            printf("O endereco %x da posicao %d e par\n",pa,i);
        }
    }
    return 0;
}