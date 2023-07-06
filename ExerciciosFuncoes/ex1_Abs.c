#include <stdio.h>
#include <stdlib.h>
// 1.- Escreva uma função abs() que calcula o valor absoluto de um número. O programa principal chamará esta função. Se deverá ler o número a ser testado.

int abs(int x);

int main(){
    int n1;
    printf("Insira o numero para transforma-lo em absoluto: ");
    scanf("%d",&n1);
    n1 = abs(n1);
    printf("O resultado absoluto de n1 eh: %d",n1);
    return 0;
}