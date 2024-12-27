#include<stdio.h>
#define SHU 80
char * input_arr(char * n);
char * shai_cha(char * n,char * arr);
int main(void){
    char String[SHU];
    input_arr(String);
    return 0;
}
char * input_arr(char * n){
    char Ether;
    char * awa;
    fgets(n,SHU,stdin)
    while (Ether != EOF)
    {
        printf("输入EOF退出");
        while (Ether = getchar() == '\n')
            continue;
        if (awa = shai_cha(Ether) != null)
            printf("%p",awa);
        else
            printf("请重试")；
    } 
}

char * shai_cha(char n,char * arr){
    while (arr == '\0'){
        if(*arr == n)
            return *arr;
        else
            arr++;
    }
    return null;
}