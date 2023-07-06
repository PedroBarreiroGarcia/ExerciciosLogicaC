// 5.- Crie um programa que contenha um array de float contendo 10 elementos. 
// Imprima o endereço de cada posição desse array.
#include <stdio.h>

int main()
{
    float vet[10];
    int i;
    float *ponteiro[10];
    
    for (i = 0; i < 10; i++) {
        printf("Digite o valor do elemento %d do vetor: ", i);
        scanf("%f", &vet[i]);
        ponteiro[i] = &vet[i];
    }
    
    for (i = 0; i < 10; i++) {
        printf("\nO endereço de memoria do elemento %d do vetor eh: %x", i, ponteiro[i]);
    }

    return 0;
}
