#include<stdio.h>
int main(void)
{
    int ch;
    int ji_shu = 0;
    while((ch = getchar()) != EOF)
    {
        ji_shu++;
    }
    printf("%d",ji_shu);
}