#include<stdio.h>
int main(void)
{
    char ch;
    int ko_ge = 0,huan_hang = 0,qi_ta = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            huan_hang++;
        else if (ch ==' ')
            ko_ge++;
        else
            qi_ta++;
    }
    printf("%d %d %d",ko_ge,huan_hang,qi_ta);
    return 0;
}