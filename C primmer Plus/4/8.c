#include<stdio.h>
int main()
{
    int yun_suan,yun_suan_two;
    printf("This program computers moduli\n");
    printf("Enther an integer to serve as the second operand: ");scanf("%d %d",&yun_suan,&yun_suan_two);
    printf("%d %% %d is %d\n",yun_suan,yun_suan_two,yun_suan % yun_suan_two);
    while (yun_suan >0)
    {
        printf("Enther next number for first operand (<= 0 to quit):");
        scanf("%d",&yun_suan);
        printf("%d %% %d is %d\n",yun_suan,yun_suan_two,yun_suan % yun_suan_two);
    }
    printf("Done");
    return 0;
}