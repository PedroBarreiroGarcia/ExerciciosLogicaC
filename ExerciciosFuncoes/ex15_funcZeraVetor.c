#include <stdio.h>

void ZeraVet (float v[10], int qtd){
    int i; 
    for(i=0;i<qtd;i++)
        v[i]=0.0;
    
}

void main()
{
    int i;
    float Vet[10];
    ZeraVet(Vet,10);
    for(i=0;i<10;i++)
        printf("%.2f\n",Vet[i]);
}
