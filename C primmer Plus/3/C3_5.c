#include<stdio.h>
int main(void)
{
    float MB_do,MB_s,xia_zai;
    scanf("%f,%f",&MB_do,&MB_s);
    xia_zai = MB_do/MB_s;
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.",MB_s,MB_do,xia_zai);
    return 0;
}