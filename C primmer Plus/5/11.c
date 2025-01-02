#include<stdio.h>
#define shu_zu 8
int main()
{
    int index,index_two;
    int dao_xu[shu_zu];
    for (index = 0;index<8;index++)
    {
        scanf("%d",&dao_xu[index]);
    }
    
    for (index_two = 7;index_two>=0;index_two--)
    {
        printf("%d",dao_xu[index_two]);
    }
    return 0;
}