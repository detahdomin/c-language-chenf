#include<stdio.h>
int awa(int a);
int main()
{
    double c;
    scanf("%lf",&c);
    printf("%d",awa(c));
    return 0;
}
int awa(int a)
{
    a = a * a;
}