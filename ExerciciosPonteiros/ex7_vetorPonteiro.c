// 7.- Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada ´ valor lido. 
#include<stdio.h>

int main(){
    int a[5], *pa;
    printf("Alimente o vetor de 5 posicoes inteiros\n");

    for(int i=0; i<5; i++){
        printf("Insira o elemento %d: \n", i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        pa= &a[i];
        int res=*pa+*pa;
        printf("O dobro do elemento %d eh: %d\n",i , res);
    }
    return 0;
}