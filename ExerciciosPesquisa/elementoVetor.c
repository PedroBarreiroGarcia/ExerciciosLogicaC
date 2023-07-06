#include <stdio.h>

int main()
{
    int a[100], indice, elem_pesq,tam_vet,aux_indice;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&tam_vet);
    
    for(indice=1; indice<=tam_vet; indice++){
        printf("Digite o elemento  %d do vetor: ", indice);
        scanf("%d",&a[indice]);
    }
    
    printf("Digite o elemento de pesquisa: ");
    scanf("%d",&elem_pesq);
    indice=1;
    while(indice<=tam_vet){
        if(elem_pesq==a[indice]){
            aux_indice=indice;
            printf("O elemento de pesquisa %d encontra-se na posicao %d no vetor %d ",elem_pesq,aux_indice, a[aux_indice]);
            indice=tam_vet+1;
        }else{
            indice++;
            if(indice==tam_vet){
                printf("Nao foi encontrado elemento dentro do vetor!");
            }
        }
    }
    return 0;
}