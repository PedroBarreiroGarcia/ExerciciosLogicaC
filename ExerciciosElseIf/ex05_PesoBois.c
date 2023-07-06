#include <stdio.h>

int main(){
    // 5.- Em um frigorífico existem 90 bois. Cada boi traz preso em seu pescoço um cartão contendo seu número
    // de identificação e seu peso. Faça um programa em C que imprima a identificação e o peso do boi mais
    // gordo e do boi mais magro (supondo que não haja empates).
    
    int identificação,idMaisPesado=0,idMaisLeve=0,i=0 ;
    float peso=0,maisPesado=0,maisLeve=0;
    
    printf("Peso de Bois\n");
    
    printf("Digite a identificação dos bois:");
    scanf("%d", &identificação);
    printf("Digite o peso dos animais:");
    scanf("%f", &peso);
    maisLeve=peso;
    maisPesado=peso;
    
    for (i=1;i<=99;i++){
        printf("Digite a identificação dos bois:");
        scanf("%d", &identificação);
        printf("Digite o peso dos animais:");
        scanf("%f", &peso);
        
        if(peso<maisLeve){
            maisLeve=peso;
            idMaisLeve=identificação;
        }
        if(peso>maisPesado){
            maisPesado=peso;
            idMaisPesado=identificação;
        }
    }
        
    printf("\nO boi mais leve eh o %d ", idMaisLeve);
    printf("; com peso de %.2f kg ", maisLeve);
    printf("\nO boi mais pesado eh o %d ", idMaisPesado);
    printf("; com peso de %.2f kg ", maisPesado);
    return 0;
}