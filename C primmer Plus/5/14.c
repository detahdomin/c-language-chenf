#include<stdio.h>
int main(void)
{
    double one_shu[8],two_shu[8];
    int index,sum;
    for (index = 0;index < 8;index++)
    {
        scanf("%lf",&one_shu[index]);
    }
    for (index = 0,sum = 0;index < 8;index++)
    {
        sum += one_shu[index];
        two_shu[index] = sum;
        printf("%lf",one_shu[index]);
    }
    printf("\n");
    for (index = 0;index < 8;index++)
    {
        printf("%lf",two_shu[index]);
    }
    return 0;
}