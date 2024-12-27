#include<stdio.h>
int main(void)
{
    int Daphnec = 100,Deirdre = 100;
    int index = 0;
    int dai = 100;
    do
    {
        index++;
        Daphnec += dai * 0.1;
        Deirdre += Deirdre * 0.05;
    }while(Deirdre<Daphnec);
    printf("%d",index);
    return 0;
}