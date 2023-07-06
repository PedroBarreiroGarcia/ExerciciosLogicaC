#include <stdio.h>

int main(){
    int main(){
    // 1.- A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Faça um
    // programa em C que receba a idade de um NÚMERO NÃO DETERMINADO DE nadadores e imprima para cada
    // nadador a sua idade e a sua categoria segundo a tabela a seguir:
    
    // categoria         idade
    // Infantil A       5-7 anos
    // Infantil B       8-10 anos
    // Juvenil A       11-13 anos
    // Juvenil B       14-17 anos
    // Sênior          maiores de 18 anos
    
    int idade, validacao;
    
    printf("Categoria dos nadadores\n");
    
    validacao=1;
    
    while (validacao!=0){
        printf("Digite a idade do atleta: ");
        scanf("%d", &idade);
        
        if(idade>=5 && idade<=7){
            printf("\nSua idade é de: %d ", idade);
            printf(" anos, portanto a categoria do atleta é Infantil A");
        }else if (idade>=8 && idade<=10){
            printf("\nSua idade é de: %d ", idade );
            printf(" anos, portanto a categoria do atleta é Infantil B");
        }else if (idade>=11 && idade<=13){
            printf("\nSua idade é de: %d ", idade);
            printf(" anos, portanto a categoria do atleta é Juvenil A");
        }else if (idade>=14 && idade<=17){
            printf("\nSua idade é de: %d ", idade);
            printf(" anos, portanto a categoria do atleta é Juvenil B");
        }else if (idade>=18){
            printf("\nSua idade é de: %d ", idade);
            printf(" anos, portanto a categoria do atleta é Sênior");
        }
        
        printf("\n \nDeseja calcular a categoria de mais um atleta?\n [1] - Sim\n [0] - Não ");
        scanf("%d", &validacao);
    }
    
    return 0;
}

}