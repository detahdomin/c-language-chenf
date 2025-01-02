#include<stdio.h>
int main(void)
{
    int shang_xian,xia_xian;
    printf("请输入表格的上下限:");
    for (scanf("%d %d",&shang_xian,&xia_xian);xia_xian <= shang_xian;xia_xian++)
    {
        printf("%d\t%d\t%d\t\n",xia_xian,xia_xian*xia_xian,xia_xian*xia_xian*xia_xian);
    }
    return 0;
}