#include<stdio.h>
#define yin_cun 0.39370
int main(void)
{
    double sheng_gao;
    const double yin_chi = 0.0328084;
    printf("Enther a height oin centimeters: ");
    scanf("%lf",&sheng_gao);
    printf("%.1lf cm = %.0lf feet,%.1lf inches",sheng_gao,sheng_gao * yin_chi,sheng_gao * yin_cun);
    while(sheng_gao>0)
    {
        printf("\nEnther a height oin centimeters (<=0 to quit): ");
        scanf("%lf",&sheng_gao);
        printf("%.1lf cm = %lf feet,%.1lf inches",sheng_gao,sheng_gao * yin_chi,sheng_gao * yin_cun);
    }
    printf("\nbye");
    return 0;
}