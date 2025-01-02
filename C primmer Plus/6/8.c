#include<stdio.h>
int main(void)
{
    char ch;
    double sum,shui,yuan_jia;
    double shi_chang;
    printf("******************************************\n");
    printf("Enther the number corresponding to the desired pay rate or action\n");
    printf("1) $8.75/hr\t\t 2) $9.33/hr\n3) $10.00/hr\t\t4) $11.20/hr\n5) quit\n");
    printf("******************************************\n:");
    while (1){
        ch = getchar();
        if (ch != '5')
        {
            switch (ch)
            {
            case '1':yuan_jia = 8.75;
                break;
            case '2':yuan_jia = 9.33;
                break;
            case '3':yuan_jia = 10.00;
                break;
            case '4':yuan_jia = 11.20;
            default:
                break;
            }
            printf("input int work:");
            scanf("%lf",&shi_chang);
            if (shi_chang > 40)
                sum = shi_chang * yuan_jia *1.5;    
            else
                sum = shi_chang * yuan_jia;
            if (sum <= 300)
            {
                shui = sum * 0.15;
            }
            else if (sum > 300 && sum <= 450)
            {
                shui = (300 * 0.15) + (sum - 300 * 0.20);
            }
            else
                shui = (300 * 0.15) + (150 * 0.20)+(sum - 450 * 0.25);
            printf("%lf,%lf,%lf",sum,shui,sum - shui);
        }   
        else
        {
            break;
        }
    }
    return 0;
}     

