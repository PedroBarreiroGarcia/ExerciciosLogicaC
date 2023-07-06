#include <stdio.h>

// 2.- Escreva uma função que converte uma temperatura de Farenheit para Celsius.

int conversor(int x);

int main(){
    int tempF;
    printf("Insira a temperatura em Farenheit: \n");
    scanf("%d",&tempF);
    conversor(tempF);
    return 0;
}

int conversor(int x){
    int tempC = (x-32)*5/9;
    printf("%dF = %dC",x,tempC);
}
