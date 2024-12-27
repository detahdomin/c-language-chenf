#include<stdio.h>
int main(void)
{
    int count, sum, MAX;
    count = 0;
    sum = 0;
    scanf("%d",&MAX);
    while (count ++ < MAX)
    {
        sum = sum + count;
    }
    printf("sum = %d\n", sum);
    return 0;
}