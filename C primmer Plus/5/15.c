#include<stdio.h>
#include<string.h> 
int main(void)
{
    char shu_zu[256];
    int index;
    scanf("%s",shu_zu);
    for (index = strlen(shu_zu);index >= 0;index--)
    {
        printf("%c",shu_zu[index]);
    }
    return 0;
}