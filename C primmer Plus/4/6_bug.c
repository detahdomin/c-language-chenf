#include<stdio.h>
int main(void)
{
    int count = 0;
    int MAX;
    scanf("%d",&MAX);
    while (count++ < MAX)
    {
        printf("%d",count * count);
    }
    printf("\nbye");
    return 0;
}