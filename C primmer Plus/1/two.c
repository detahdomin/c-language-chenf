#include<stdio.h>
int jolly(void);
int deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
}
int jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    return 0;
}
int deny(void)
{
    printf("Which nobody can deny!\n");
    return 0;
}