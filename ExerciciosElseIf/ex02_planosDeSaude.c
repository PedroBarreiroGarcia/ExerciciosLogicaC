#include <stdio.h>

int main(){
    // Depois da liberação do governo para as mensalidades dos planos de saúde, as pessoas começaram a fazer
    // pesquisas para descobrir um bom plano, não muito caro. Um vendedor de um plano de saúde apresentou a
    // tabela a seguir. Faça um programa em C que entre com o nome e a idade de UM NÚMERO NÃO
    // DETERMINADO DE pessoas e imprima o nome e o valor que ela deverá pagar.
    
    // idade                         valor
    // até 10 anos                  R$ 30,00
    // acima de 10 até 29 anos      R$ 60,00
    // acima de 29 até 45 anos      R$ 120,00  
    // acima de 45 até 59 anos      R$ 150,00
    // acima de 59 até 65 anos      R$ 250,00
    // maior que 65 anos            R$ 400,00
    
    int idade, validacao;
    char nome[20];
    
    printf("Planos de saúde\n");
    
    validacao=1;
    
    while (validacao!=0){
        printf("Digite o nome do cliente: ");
        scanf("%s", &nome);
        printf("Digite a idade do cliente: ");
        scanf("%d", &idade);
        
        if(idade<=10){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf(" e o valor do plano é de: R$ 30,00");
        }else if (idade>10 && idade<=29){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf("e o valor do plano é de: R$ 60,00");
        }else if (idade>29 && idade<=45){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf("e o valor do plano é de: R$ 120,00");
        }else if (idade>45 && idade<=59){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf("e o valor do plano é de: R$ 150,00");
        }else if (idade>59 && idade<=65){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf("e o valor do plano é de: R$ 250,00");
        } else if (idade>65){
            printf("\nO(a) cliente %s tem %d de idade", nome, idade);
            printf("e o valor do plano é de: R$ 400,00");
        }
        
        printf("\n \nDeseja calcular o plano de mais um cliente?\n [1] - Sim\n [0] - Não ");
        scanf("%d", &validacao);
    }
    return 0;
}
