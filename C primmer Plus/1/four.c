#include<stdio.h>
int br(void);
int ic(void);
int main(void)
{
    br();ic();
    printf("\n");
    br();
    printf("\n");
    ic();
    return 0;
}
int br(void)
{
    printf("brazil,Russia");
    return 0;
}
int ic(void)
{
    printf("India,China");
    return 0;
}
