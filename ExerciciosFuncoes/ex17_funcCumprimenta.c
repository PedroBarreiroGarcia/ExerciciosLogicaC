#include <stdio.h>

void cumprimenta(char,char);

int main()
{
    char primeiro,segunda;
    printf("Entre com duas iniciais (sem separação)");
    primeiro=getchar();
    segunda=getchar();
    cumprimenta(primeiro,segunda);
}

void cumprimenta (char inic1, char inic2){
    printf("Ola, %c%c!\n",inic1,inic2);
}
