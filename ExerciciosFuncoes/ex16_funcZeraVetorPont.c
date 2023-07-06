#include <stdio.h>

void ZeraVet2(float *v, int qtd){
    int i; 
    for(i=0;i<qtd;i++)
        v[i]=0.0;
}

int main()
{
    int i;
    float Vet[10];
    ZeraVet2(Vet,10);
    for(i=0;i<10;i++)
        printf("%.2f\n",Vet[i]);
}
