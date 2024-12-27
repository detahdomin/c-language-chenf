#include<stdio.h>
int main(void)
{
    int tuo_shui_shu;
    printf("tuo shui shu =");
    scanf("%d",&tuo_shui_shu);
    float kuatuo = 3.0e-23;
    printf("shuifenzishul = %d",tuo_shui_shu / kuatuo);
    return 0;
}