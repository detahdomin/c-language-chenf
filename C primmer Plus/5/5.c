#include<stdio.h>
int main(void)
{
    char yong_shu;
    printf("请输入大写字符:");
    scanf("%c",&yong_shu);
    int b = 5;
    for (int index = 1;index<6;index++)
    {
        for (int ko_ge = 5;ko_ge>index;ko_ge--)
        {
            printf(" ");
        }
        for (int index_two = 0,a = 0;index_two < index;index_two++)
        {
            printf("%c",yong_shu-4+a);
            a++;
        }
        for (int index_s = 1,a = 0,ti_huan = yong_shu;index_s < index;index_s++)
        {
            printf("%c",yong_shu-b-a++);
        }
        b--;
        printf("\n");
    }
    return 0;
}