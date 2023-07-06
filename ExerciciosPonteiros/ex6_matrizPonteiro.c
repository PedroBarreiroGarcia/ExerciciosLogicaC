// 6.- Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. 
// Imprima o endereço de cada posição dessa matriz.

#include <stdio.h>

int main()
{
    float mat[3][3];
    int i,j;
    float *ponteiro[3][3];
    
    for (i = 0; i < 3; i++) {
        for(j=0;j<3;j++){
            printf("Digite o valor do elemento da matriz: ");
            scanf("%f", &mat[i][j]);
            ponteiro[i][j] = &mat[i][j];
        }
    }
    
    for (i = 0; i < 3; i++) {
        for(j=0;j<3;j++){
            printf ("\nElemento[%d][%d] = %d\n", i, j,ponteiro[i][j]);
        }
    }
    
    return 0;
}
