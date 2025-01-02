#include<stdio.h>
#include<string.h>
#define SIZE 80

char * string_in(char * one_arr,char * two_arr);

int main(void){
    char test_one_arr[SIZE],test_two_arr[SIZE];
    char a[3];
    while (strcmp(a,"NO") != 0)
    {
        printf("请输入一号字符串:");
        fgets(test_one_arr,SIZE,stdin);
        printf("请输入二号字符串:");
        fgets(test_two_arr,SIZE,stdin);
        char *result = string_in(test_one_arr, test_two_arr);
        if (result != NULL)
            printf("第一字符串中包含第二字符串。位置：%p\n", (void *)result); 
        else 
            printf("第一字符串中不包含第二字符串。\n");
        printf("还想重来吗?不想请输入NO");
        scanf("%s",a);
        while (getchar() != '\n') continue;
    }
    return 0;
}
char * string_in(char * one_arr,char * two_arr){
    int count = 0;
    int str_len = strlen(two_arr);
    while (*one_arr != '\0' && count < str_len)
    {
        if(*(two_arr+count) == *(one_arr+count)){
            count++;
        }
        else{
            count = 0;
            one_arr++;
        }
    }
    if(count == str_len) return one_arr;
    else return NULL;
}