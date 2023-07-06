//A primeira forma de printar o vetor, está passando como parametro o vetor e o numero de indice que o vetor tem ao todo, e printa normalmente utilizando for

//A segunda forma, está passando o vetor como um ponteiro e imprimindo o seu valor normalmente igual feito na primeira função

//Já a ultima forma de printar o vetor, está passando o vetor como um ponteiro e percorrendo ele "pulando" casas do vetor e printanto individuamente utilizando um for

#include <stdio.h>

int main(){
    int v[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
    printf("*v = %d", *v); 
    return 0;
}