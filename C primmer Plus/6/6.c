#include<stdio.h>
int main(void)
{
    char ch,shang_ch;
    int sum = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == 'i')
        {
            if (shang_ch == 'e')
            {
                sum++;
            }
        }
        shang_ch = ch;
    }
    printf("%d",sum);
    return 0;
}