#include <stdio.h>
// 1.-  Crie um programa em C que declara
// dois números inteiros – inteiros como 1 e 2
// dois caracteres do tipo char – char como a E b).

// Em seguida, mostre o VALOR de cada variável, bem como seu ENDEREÇO
// Depois, altere os valores das variáveis e mostre novamente o VALOR e ENDEREÇO de cada variável desta (2112 E 666; ‘A’ e ‘B’)

int main()
{
    int n1, n2;
    char s1[10], s2[10];

    printf("Insira um numero inteiro em n1: \n");
    scanf("%d", &n1);
    printf("Insira um numero inteiro em n2: \n");
    scanf("%d", &n2);
    printf("Insira uma string em s1: \n");
    scanf("%s", &s1);
    printf("Insira uma string em s2: \n");
    scanf("%s", &s2);

    printf("Valor da variavel n1: %d\n", n1);
    printf("Valor da variavel n2: %d\n", n2);
    printf("Valor da variavel s1: %s\n", s1);
    printf("Valor da variavel s2: %s\n", s2);

    printf("Endereco da variavel n1: %x\n", &n1);
    printf("Endereco da variavel n1: %x\n", &n2);
    printf("Endereco da variavel s1: %x\n", &s1);
    printf("Endereco da variavel s2: %x\n", &s2);

    printf("\n\nAgora altere os valores das variaveis: \n\n");
    printf("Insira um numero inteiro em n1: \n");
    scanf("%d", &n1);
    printf("Insira um numero inteiro em n2: \n");
    scanf("%d", &n2);
    printf("Insira uma string em s1: \n");
    scanf("%s", &s1);
    printf("Insira uma string em s2: \n");
    scanf("%s", &s2);

    printf("Valor da variavel n1: %d\n", n1);
    printf("Valor da variavel n2: %d\n", n2);
    printf("Valor da variavel s1: %s\n", s1);
    printf("Valor da variavel s2: %s\n", s2);

    printf("Endereco da variavel n1: %x\n", &n1);
    printf("Endereco da variavel n1: %x\n", &n2);
    printf("Endereco da variavel s1: %x\n", &s1);
    printf("Endereco da variavel s2: %x\n", &s2);
    return 0;
}