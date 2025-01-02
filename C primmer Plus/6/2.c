#include<stdio.h>
int main()
{
    char ch;
    int index = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch != '\n'){
            printf("%c-%d",ch,ch);
            if (++index % 8 == 0){
                printf("\n");
            }
        }
    }
    return 0;
}