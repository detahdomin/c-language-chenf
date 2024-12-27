#include<stdio.h>
int main(void)
{
    int two_pwo[8];
    int index,pwo;
    int index_two = 0;
    for(index = 0,pwo = 2;index<8;index++)
    {
        two_pwo[index] = pwo;
        pwo *= 2;
    }
    index = 0;
    do
    {
        printf("%d\n",two_pwo[index]);
    }while(++index < 8);
    return 0;
}