
#include <stdio.h>

int main(){
    // 8,- Crie um programa em C que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
    // aplicação de multas de trânsito.
    // O algoritmo deve ler as seguintes informações para cada motorista:
    // • número da carteira de motorista (de 1 a 4327);
    // • número de multas;
    // • valor de cada uma das multas.
    // Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o total de recursos
    // arrecadados (somatório de todas as multas). O programa deverá imprimir também o número da carteira do motorista 
    // que obteve o maior número de multas.
    // Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
    
    int num_carteira_mot=1, num_multas,i,mais_multas=0,carteira_mais_multas;
    float valor_multa,total_multas,total_multas_invidual;
    
    printf("\nDETRAN\n");
    
    while(num_carteira_mot!=0){
        printf ("\nDigite o numero da carteira de motorista de 1 a 4327: (digite 0 para encerrar o programa)");
        scanf("%d", &num_carteira_mot);
        
        if(num_carteira_mot==0){
            break;
        }
        
        while (num_carteira_mot<1 || num_carteira_mot>4327){
            printf ("Digite o numero da carteira de motorista de 1 a 4327: ");
            scanf("%d", &num_carteira_mot);
        }
        
        printf ("Digite o numero de multas: ");
        scanf("%d", &num_multas);
        
        if(num_multas>mais_multas){
            mais_multas=num_multas;
            carteira_mais_multas=num_carteira_mot;
        }
        
        for(i=1; i<=num_multas;i++){
            printf ("Digite o valor de cada multa: R$  ");
            scanf("%f", &valor_multa);
            total_multas_invidual=total_multas_invidual+valor_multa;
            total_multas=total_multas+valor_multa;
        }
        
        printf("\nO motorista com carteira numero: %d ;",num_carteira_mot);
        printf("teve %d multas;",num_multas);
        printf(" no valor total de R$: %.2f \n",total_multas_invidual);
        
        total_multas_invidual=0;
        
        // printf("\nPara encerrar programa digite numero do consumidor = 0\n ");
        
    }
    printf("\nO valor total arrecadado foi de: R$ %.2f",total_multas);
    printf("\nO numero da carteira do motorista com mais multas eh: %d",carteira_mais_multas);
    return 0;
}
