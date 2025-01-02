#include<stdio.h>
#include<string.h>
int main(void)
{
    char dan_ci[10];
    int index;
    scanf("%9s",dan_ci);
    for(index = strlen(dan_ci)-1; index >= 0;index--)
    {
       printf("%c",dan_ci[index]); 
    }
    return 0;
}