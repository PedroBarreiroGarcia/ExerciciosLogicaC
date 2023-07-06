#include <stdio.h>

int quadrado(int);

int main(){
    int s1,s2,s3;
    printf("Entre com três inteiros: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1>0 && s2>0 && s3>0 && 
        (quadrado(s1)+quadrado(s2)==quadrado(s3)||quadrado(s2)+quadrado(s3)==quadrado(s1)||
        quadrado(s3)+quadrado(s1)==quadrado(s2))){
        printf("%d;%d;%d podem formar um triângulo reto\n",s1,s2,s3);
    }else{
        printf("%d;%d;%d não podem formar um triângulo reto\n",s1,s2,s3);
    }
}

int quadrado(int n){
    return n*n;
}
