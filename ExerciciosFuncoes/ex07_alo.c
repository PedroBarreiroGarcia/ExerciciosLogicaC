#include <stdio.h>

/*declaração (protótipo) da função alo()*/
void alo(void);

/*definição da função main()*/
int main(){
    int i=1;
    while(i<=3){
        alo();
        i+=1;
    }
}

/*definição da função alo()*/
void alo (void)
{
printf("Alo!\n");}