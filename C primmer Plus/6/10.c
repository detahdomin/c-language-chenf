#include<stdio.h>
int main(void)
{
    int shu_zi,jin_e;
    double ying_jiao;
    while (1)
    {
        scanf("%d",&shu_zi);
        switch (shu_zi)
        {
        case 1:
            ying_jiao = 17850;
            break;
        case 2:
            ying_jiao = 23800;
            break;
        case 3:
            ying_jiao = 29750;
            break;
        case 4:
            ying_jiao = 14875;
            break;
        default:
            break;
        }
        printf("请输入金额数量:");
        scanf("%d",&jin_e);
        if (jin_e > ying_jiao)
            printf("%lf",0.15 * ying_jiao + 0.28 * (jin_e - ying_jiao));
        else
            printf("%lf",0.15 * jin_e);
    }
    
    return 0;
}