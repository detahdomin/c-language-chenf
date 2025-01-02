#include<stdio.h>
int main(void)
{
    int lower, upper ,sum;
    scanf("%d %d",&lower,&upper);
    while (lower < upper)
    {
        for(int lower_nei = lower,sum = 0;lower_nei < upper;lower_nei++)
        {
            sum += lower_nei + upper;
        }
        printf("%d\n",sum*sum);
        scanf("%d %d",&lower,&upper);
    }
    printf("Done");
    return 0;
}