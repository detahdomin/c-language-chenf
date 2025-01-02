#include<stdio.h>
double float_hui_kun(double A, double B);

int main(void)
{
    double f_one,f_two;
    int fei_shu;
    fei_shu = scanf("%lf %lf",&f_one,&f_two);
    while(fei_shu == 2)
    {
        printf("%lf",float_hui_kun(f_one,f_two));
        fei_shu = scanf("%lf %lf",&f_one,&f_two);
    }
    return 0;
}



double float_hui_kun(double A, double B)
{
    double sum_sum;
    sum_sum = A - B / A * B;
    return sum_sum;
}