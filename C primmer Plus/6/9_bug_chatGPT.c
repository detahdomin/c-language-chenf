#include<stdio.h>
int main(void)
{
    int index,su_shu_MAX,jian_yan;
    for(scanf("%d",&su_shu_MAX),index = 2;index <= su_shu_MAX;index++)
    {
        if (su_shu_MAX < 0)
        {
            break;
        }
        for (jian_yan = 2;jian_yan < index;jian_yan++)
        {
            if(index % jian_yan == 0 )
            {
                break;
            }
        }
        if (index == jian_yan)
        {
            printf("%d\n",index);
        }
    }   
    return 0;
}