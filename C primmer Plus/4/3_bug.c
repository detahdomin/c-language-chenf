#include<stdio.h>
int main(void)
{
    int days = 1;
    while(days>0){
        scanf("%d",&days);
        printf("%d days are %d weeks, %d days\n",days,days / 7,days % 7);
        /*出现只要重复输入很多次,就会无线重复的bug*/
    }
    return 0;
}