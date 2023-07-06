#include <stdio.h>
// 6.- Usando protótipos, escrever o programa principal em c.

float volume(float comprimento, float largura, float altura);
float dinheiro(int c25, int c10, int c5, int c1);

int main()
{
    float comprimento, largura, altura;
    int c25, c10, c5, c1;

    printf("Digite as medidas para o calculo do volume - \n[1] Comprimento\n[2] Largura\n[3] Altura\n\n ");
    scanf("%f %f %f", &comprimento, &largura, &altura);

    printf("O volume eh: %6.3f\n", volume(comprimento, largura, altura));

    printf("Digite a quantidade de moedas - \n[1] 25 centavos\n[2] 10 centavos\n[3] 5 centavos\n[4] 1 centavo\n\n");
    scanf("%d %d %d %d", &c25, &c10, &c5, &c1);

    printf("O total das moedas eh: %.2f\n", dinheiro(c25, c10, c5, c1));

    return 0;
}

float volume(float comprimento, float largura, float altura)
{
    return comprimento * largura * altura;
}

float dinheiro(int c25, int c10, int c5, int c1)
{
    return c25 * 0.25 + c10 * 0.10 +
           c5 * 0.05 + c1 * 0.01;
}