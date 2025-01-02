#include<stdio.h>
#define ji_chu_zhi 60
int main()
{   
    float shu_zi = 1.0;
    while (shu_zi>0)
    {
        scanf("%f",&shu_zi);
        printf("%f,%f\n",shu_zi / ji_chu_zhi,shu_zi / ji_chu_zhi / ji_chu_zhi);
    }
    
    return 0;
}