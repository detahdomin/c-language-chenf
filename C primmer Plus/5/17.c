#include<stdio.h>
int main(void)
{
    int zho_jiang = 100000,index = 0;
    while(zho_jiang>0)
    {
        zho_jiang += zho_jiang * 0.08;
        zho_jiang -= 10000;
        index++;
    }
    printf("%d",index);
    return 0;
}