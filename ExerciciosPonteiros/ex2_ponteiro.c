#include <stdio.h>
#include <string.h>
// 2.- Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char.
// Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

int main()
{
    int nint, *pnint;
    float nfloat, *pnfloat;
    char *pschar;

    nint = 1;
    nfloat = 1.1;
    char schar[10] = "fatec";

    pnint = &nint;
    pnfloat = &nfloat;
    pschar = &schar;

    printf("Antes das modificacoes\n\n");

    printf("Valor da variavel inteira: %d\n", nint);
    printf("Valor da variavel real: %.1f\n", nfloat);
    printf("Valor da variavel char: %s\n", schar);
    printf("Valor do ponteiro inteiro: %d\n", *pnint);
    printf("Valor do ponteiro real: %.1f\n", *pnfloat);
    printf("Valor do ponteiro char: %c\n", *pschar);

    *pnint = *pnint + 10;
    *pnfloat = *pnfloat + 1;
    *pschar = *schar + "aaaaa";

    printf("\n\nDepois das modificacoes\n\n");

    printf("Valor da variavel inteira: %d\n", nint);
    printf("Valor da variavel real: %.1f\n", nfloat);
    printf("Valor da variavel char: %s\n", schar);
    printf("Valor do ponteiro inteiro: %d\n", *pnint);
    printf("Valor do ponteiro real: %.1f\n", *pnfloat);
    printf("Valor do ponteiro char: %c\n", *pschar);

    return 0;
}