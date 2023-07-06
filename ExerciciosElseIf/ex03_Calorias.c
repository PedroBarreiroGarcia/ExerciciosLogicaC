#include <stdio.h>

int main(){
    // 3.- Crie um programa em C que informe a quantidade total de calorias de uma refeição a partir da escolha
    // do usuário que deverá informar o prato, a sobremesa, e bebida conforme a tabela a seguir.
    
    // prato                    sobremesa                  bebida
    // Vegetariano 180cal      abacaxi 75cal               chá 20cal
    // Peixe 230cal            Sorvete diet 110cal         Suco de laranja 70cal
    // Frango 250cal           mousse diet 170 cal         Suco de melão 100cal
    // Carne 350cal            mousse chocolate 200cal     Refrigerante diet 65cal
    
    int prato, sobremesa, bebida, total;
    
    printf("Calorias refeição\n");
    
        printf("Digite o prato principal: \n [1] - Vegetariano 180cal\n [2] - Peixe 230cal \n [3] - Frango 250cal \n [4] - Carne 350cal\n   ");
        scanf("%d", &prato);
        
        if (prato==1){
            total=180;
        }else if (prato==2){
            total=230;
        } else if (prato==3){
            total=250;
        }else if (prato==4){
            total=350;
        }
        
        printf("Digite sua sobremesa: \n [1] - Abacaxi 75cal\n [2] - Sorvete diet 110cal  \n [3] - Mousse diet 170 cal \n [4] - Mousse chocolate 200cal\n   ");
        scanf("%d", &sobremesa);
        
        if (sobremesa==1){
            total=total+75;
        }else if (sobremesa==2){
            total=total+110;
        } else if (sobremesa==3){
            total=total+170;
        }else if (sobremesa==4){
            total=total+200;
        }
        
        printf("Digite sua bebida: \n [1] - Chá 20cal\n [2] - Suco de laranja 70cal  \n [3] - Suco de melão 100cal \n [4] - Refrigerante diet 65cal\n   ");
        scanf("%d", &bebida);
        
        if (bebida==1){
            total=total+20;
        }else if (bebida==2){
            total=total+70;
        } else if (bebida==3){
            total=total+100;
        }else if (bebida==4){
            total=total+65;
        }
        
        printf("A quantidade total de calorias eh de %d",total);
    return 0;
}