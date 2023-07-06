#include <stdio.h>
// 4.- Codifique e execute o seguinte código:
// Justificar o resultado.

int obtem_int();

main(){
    int x;
    x=obtem_int();

    printf("Voce digitou %d\n", x);
    return 0;
} 

int obtem_int()
{
  int x;
  printf("Entre um valor: ");
  scanf("%d", &x);
  printf("Obrigado!\n");
  return x;
}


//O resultado não estava sendo o esperado porque a função não estava retornando o valor digitado e a função principal não estava recebendo esse valor dentro da função. Em outras palavras, a variável dentro da função principal não estava no escopo da variável que estava dentro da função, que era onde o valor digitado pelo usuário estava sendo recebido.