#include <stdio.h>
// Retorna: String de destino concatenada com string fonte.
// A primeira letra da string fonte substitui o caracter terminal da string e de destino,
// e após toda a string fonte for concatenada, o caracter terminal é inserido no final
 
int main()
{
    char resultado[50]="Programa ";
    printf("%s\n",resultado);
    
    strcat(resultado, "de Ensino ");
    printf("%s\n",resultado);
    
    strcat(resultado, "e Tutoria");
    printf("%s\n",resultado);
    
    char curso[10]=" - BBC";
    strcat(resultado, curso);
    printf("%s\n",resultado);
    
    getch();
    return 0;
}
