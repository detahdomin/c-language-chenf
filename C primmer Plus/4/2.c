#include<stdio.h>
int main(void)
{
    int zheng_shu;
    scanf("%d",&zheng_shu);
    int zheng_shu_void = zheng_shu+10;
    while(zheng_shu <= zheng_shu_void)
    {
        printf("%d ",zheng_shu++);
    }
    return 0;
}