#include<stdio.h>
int main(void)
{
    int int_shu;
    int j = 0, g = 0, j_shu = 0, g_shu = 0;
    scanf("%d",&int_shu);
    while (int_shu != 0)
    {
        if (int_shu % 2 == 0)
        {
            g++;
            g_shu += int_shu;
            printf("%d,%d\n",g,g_shu / g);
        }
        else if (int_shu % 2 == 1)
        {
            j++;
            j_shu += int_shu;
            printf("%d,%d\n",j,j_shu / j);
        }
        scanf("%d",&int_shu);
    }
    return 0;
}