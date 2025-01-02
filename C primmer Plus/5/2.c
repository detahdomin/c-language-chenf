#include<stdio.h>
int main(void)
{
    int index = 0;
    while (++index<6)
    {
        int two = 0;
        while (two++<index)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}
