#include<stdio.h>
void jie_shao(void);
int xian_zhi(int a,int b);
int main(void)
{
    int a = 1000,b = 10000;
    printf("%d",xian_zhi(a,b));
    return 0;
}
void jie_shao(void)
{
    printf("Please choose one of the following:\n1) copy files\t\t2) move files\n3) remove files\t\t4) quit\nEnter the number of your choice:");
}
int xian_zhi(int a,int b)
{
    int zheng_shu;
    jie_shao();
    while(scanf("%d",&zheng_shu) == 1)
    {
        if (zheng_shu <= b && zheng_shu >= a)
            return zheng_shu;
        else
            jie_shao();
    }
    return 4;
}
