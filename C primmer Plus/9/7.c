#include<stdio.h>
void shu_chu_jian_ce(void);
int position(char ch);
int main(void){
    shu_chu_jian_ce();
}
void shu_chu_jian_ce(void)
{
    char ch;
    while ((ch = getchar()) != EOF)
    {
        if((ch = getchar()) == '\n')continue;
        /*清理换行符*/ 
        if(position(ch) != -1)
        printf("-1 so not firnt");
        else printf("%c",ch);
    }
}
int position(char ch)
{
    if(ch >='A' && ch <= 'Z')
        return ch - 'A' + 1;
    if(ch >='a' && ch <= 'z')
        return ch - 'a' + 1;
    return -1;
}