// 4.- Considere a seguinte declaração: int A, *B, **C, ***D. Escreva um programa que leia a variável A e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quadruplo.
#include <stdio.h>

int main(){
    int A, *B, **C, ***D;
    printf("Insira o valor da variavel A: ");
    scanf("%d", &A);

    printf("\nA: %d", A);   //5

    B= &A;                  //*B -> 5
    *B= A*2;                //*B -> A+A
    
    printf("\nB: %d", *B);  //*B -> 10

    C= &B;                  //**C -> 10
    **C= A*3/2;             //**C -> 10+5

    printf("\nC: %d", **C); //**C -> 15

    D= &C;                  //***D -> 15
    ***D= A*4/3;           //***D -> 15+5

    printf("\nD: %d", ***D);//***D -> 20
}