#include<stdio.h>
int bi_da_xiao(int a,int b,int c);
int main(void)
{
    int a = 1,b = 2,c = 3;
    printf("%d",bi_da_xiao(a,b,c));
    return 0;
}
int bi_da_xiao(int a,int b,int c)
{
    if (a > b)
    {
        if (a > c)
            return a;
        else
            return c;
    }
    else
    {
        if (b > c)
            return b;
        else
            return c;
    }
}