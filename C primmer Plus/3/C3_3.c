#include<stdio.h>
int main(void)
{   
    float f_e_s;
    scanf("%f",&f_e_s);
    printf("the input is %f or %e",f_e_s,f_e_s);
    printf("the input is %+f or %e",f_e_s,f_e_s);
    return 0;
}