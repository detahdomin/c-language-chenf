#include<stdio.h>
void chline(char ch,int i,int j);
int main(void)
{
    char cha = 'a';
    chline(cha,5,5);
    return 0;
}
void chline(char ch,int i,int j)
{
    for (;j>0;j--)
    {
        for (int x = i;x>0;x--)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
}