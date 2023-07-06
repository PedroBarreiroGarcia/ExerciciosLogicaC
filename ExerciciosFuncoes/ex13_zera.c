#include <stdio.h>

void Zera (float a){
    a=0;
}

void main()
{
    float f=20.7;
    Zera(f);
    printf("%6.3f",f);
    return 0;
}
