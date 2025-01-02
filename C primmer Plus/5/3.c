#include<stdio.h>
int main(void)
{
    for (int index = 1;index <= 6;index++)
    {
        char a = 70;
        for (int index_two = 0;index_two<index;index_two++)
        {
            printf("%c",a);
            a -= 1;
        }
        printf("\n");
    }
    return 0;
}