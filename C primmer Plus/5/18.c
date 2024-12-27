#include<stdio.h>
int main(void)
{
    int pen_you_shu = 5;
    int week;
    for (week = 1;pen_you_shu<150;week++)
    {
        pen_you_shu+=(pen_you_shu-week)*2;
    }
    printf("%d",week);
    return 0;
}