#include <stdio.h>

void Zera (float a){
    a=0;
}

void main()
{
    float f=20.7;
    Zera(f);
    printf("%f",f);
    return 0;
}
