#include<stdio.h>
#define yuan_jia 10.00
int main(void)
{
    double sum,shui;
    double shi_chang;
    printf("******************************************");
    printf("Enther the number corresponding to the desired pay rate or action")
    printf("1) $8.75/hr\t\t 2)")
    while (){

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
        return 0;
    }   
}

