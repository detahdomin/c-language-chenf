#include<stdio.h>
void Temperatures(double C);
int main()
{
    double C;
    int scanf_fan_hui;
    scanf_fan_hui = scanf("%lf",&C);
    while (scanf_fan_hui == 1)
    {
        Temperatures(C);
        scanf_fan_hui = scanf("%lf",&C);
    }
    return 0;
}
void Temperatures(double C)
{
    const double she_shi = 5.0 / 9.0 * (C - 32.0), kai_shi = she_shi + 273.16;
    printf("%.2lf hua , %.2lf she , %.2lf kai\n",C,she_shi,kai_shi);
}