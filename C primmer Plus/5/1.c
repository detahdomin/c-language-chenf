#include<stdio.h>
int main(void)
{
    int index = 0;
    char zi_fu = 97,shu_zu[26];
    while(index<26)
    {
        shu_zu[index] = zi_fu;
        zi_fu += 1 ;
        index++;
    }
    printf(shu_zu);
    return 0;
}