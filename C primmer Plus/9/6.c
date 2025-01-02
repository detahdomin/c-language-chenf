#include<stdio.h>
void san_zhi_do(double * a,double * b,double * c);
int main(void)
{
    double a = 5,b = 3,c = 4;
    san_zhi_do(&a,&b,&c);
    printf("%lf,%lf,%lf",a,b,c);
}
void san_zhi_do(double * x,double * y,double * z)
{
    double temp;
    if(*x > *y){
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x > *z){
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if(*y > *z){
        temp = *y;
        *y = *z;
        *z = temp;
    }
}
