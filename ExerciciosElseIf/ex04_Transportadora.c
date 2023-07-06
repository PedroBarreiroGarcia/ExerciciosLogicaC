#include <stdio.h>

int main(){
    // 4.- Uma transportadora utiliza caminhões que suportam até 10 toneladas de peso, as caixas transportadas
    // têm tamanho fixo e o caminhão comporta no máximo 200 volumes, assim, esta transportadora precisa
    // controlar a quantidade e o peso dos volumes para acomodar nos caminhões. Faça um programa em C que
    // leia n caixas e seu peso, ao final, o programa deve imprimir a quantidade de volumes, o peso total dos
    // volumes e o peso médio dos volumes.
    
    int caixas=0,validacao=0;
    float peso=0, pesoTotal=0,pesoMedio=0;
    
    printf("Transportadora\n");
    
    do{
        printf("Digite o peso dos produtos:");
        scanf("%f", &peso);
        
        if(peso + pesoTotal<=10000){
            if(caixas<=200){
                pesoTotal=pesoTotal+peso;
                caixas++;
            }else{
                printf("Caminhão já está cheio de caixas!\n"); 
                break;
            }
        }else{
            printf("Caminhão já está com peso máximo!\n"); 
            break;
        }
        
        printf("\n\nDeseja continuar inserindo caixas? \n[1]-Sim\n[0]-Nao\n");
        scanf("%d", &validacao);
    }while(validacao==1);
    
    pesoMedio=pesoTotal/caixas;
    
    printf("\n\nSerao transportadas %d caixas\n", caixas);
    printf("O peso medio transportado por caixa e de: %.2f\n", pesoMedio);
    printf("O peso total das caixas e de: %.2f\n", pesoTotal);
    return 0;
}