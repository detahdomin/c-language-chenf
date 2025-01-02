#include<stdio.h>
void alter(int * x,int * y);
int main(void)
{
    int x = 5,y = 6;
    alter(&x,&y);
    printf("%d,%d",x,y);
    return 0;
}
void alter(int * x,int * y)
{
    int sum,cha;
    sum = *x + *y;
    cha = *x - *y;
    *x = sum;
    *y = cha;
}