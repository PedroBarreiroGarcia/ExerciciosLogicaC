#include <stdio.h>

int main()
{
    char nome[61];
    
    printf("\nDigite seu nome:");
    scanf("%s",&nome);
    
    printf("\nO nome armazenado foi: %s",nome);
    
    getch();
    return 0;
}
