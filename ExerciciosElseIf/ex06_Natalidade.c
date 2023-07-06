#include <stdio.h>

int main(){
    // 6.- Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com
    // 7 milhões de habitantes e uma taxa de natalidade de 2% ao ano, fazer um programa em C que calcule e
    // imprima o tempo necessário para que a população do país A ultrapasse a população do país B.
        
    int paisA=5000000, paisB=7000000,anos=0;
    
    printf("Natalidade\n");
    do{
        paisA=paisA*1.03;
        paisB=paisB*1.02;
        anos++;
    }while(paisA<=paisB);
    
    printf("O tempo necessario para o numero de habitantes do pais A superar o do pais B e de: %d anos",anos);
  
    return 0;
}