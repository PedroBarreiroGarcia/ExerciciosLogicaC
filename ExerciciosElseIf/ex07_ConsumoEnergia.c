
#include <stdio.h>

int main(){
    // 7.- Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para
    // cada consumidor, são digitados os seguintes dados:
    // • número do consumidor
    // • quantidade de kWh consumidos durante o mês
    // • tipo (código) do consumidor
    // 1-residencial, preço em reais por kWh = 0,3
    // 2-comercial, preço em reais por kWh = 0,5
    // 3-industrial, preço em reais por kWh = 0,7
    // Os dados devem ser lidos até que seja encontrado o consumidor com número 0 (zero). O programa em C
    // deve calcular e imprimir:
    // • O custo total para cada consumidor
    // • O total de consumo para os três tipos de consumidor
    // • A média de consumo dos tipos 1 e 2.

    int num_do_consumidor=1, cod_consumidor=0,quant_resi, quant_comer;
    float quant_kwh=0, custo=0, consumo_resi=0, consumo_comer=0, consumo_indus=0, media_resi=0, media_comer=0;
    
    printf("\nConsumo energia\n");
    
    while(num_do_consumidor!=0){
        printf("\nDigite o numero do consumidor: ");
        scanf("%d",&num_do_consumidor);
        if(num_do_consumidor==0){
            break;
        }
        printf("Digite a quantidade de kWh consumidos por mês: ");
        scanf("%f",&quant_kwh);
        printf("Digite o código do consumidor:\n [1] - Residencial\n [2] - Comercial\n [3] - Industrial\n ");
        scanf("%d",&cod_consumidor);
        
        if (cod_consumidor==1){
            custo=quant_kwh*0.3;
            consumo_resi=consumo_resi+quant_kwh;
            quant_resi++;
        }else if (cod_consumidor==2){
            custo=quant_kwh*0.5;
            consumo_comer=consumo_comer+quant_kwh;
            quant_comer++;
        }else if (cod_consumidor==3){
            custo=quant_kwh*0.7;
            consumo_indus=consumo_indus+quant_kwh;
        }
        
        printf("O consumidor %d ;",num_do_consumidor);
        printf("consumiu %.2f kWh ;",quant_kwh);
        printf(" tendo o custo total de R$: %.2f \n",custo);
    
        printf("\n\nPara encerrar programa digite numero do consumidor = 0\n ");
        
    }
    
    media_resi= consumo_resi/quant_resi;
    media_comer= consumo_comer/quant_comer;
    
    printf("\nO consumo total residencial foi de %.2f kWh\n",consumo_resi);
    printf("O consumo total comercial foi de %.2f kWh\n",consumo_comer);
    printf("O consumo total industrial foi de %.2f kWh\n",consumo_indus);
    
    printf("\nA media do consumo residencial foi de %.2f kWh\n",media_resi);
    printf("\nA media do consumo comercial foi de %.2f kWh\n",media_comer);
    
    return 0;
}
