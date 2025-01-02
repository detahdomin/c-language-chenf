#include<stdio.h>
int main(void)
{
    int index = 0;
    char zi_fu = 97,shu_zu[26];
    while(index++<26)
    {
        printf("%d\n",index);
        shu_zu[index] = zi_fu;
        zi_fu += 1 ;
    }
    printf(shu_zu);
    return 0;
}
/*#include <stdio.h>

int main(void)
{
    int index = 0;
    char zi_fu = 'a';
    char shu_zu[27];

    while (index < 26)
    {
        shu_zu[index] = zi_fu;
        zi_fu += 1;
        index += 1;
    }
    shu_zu[index] = '\0'; // 手动添加一个空字符

    printf("%s", shu_zu);
    return 0;
}
*/
