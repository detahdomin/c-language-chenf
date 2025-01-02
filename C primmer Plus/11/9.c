#include<stdio.h>
#define SIZE 80
void dao_xu(char * src_string);
int main(void){
    char string[SIZE];
    printf("请输入字符串:");
    while (fgets(string, SIZE, stdin) != NULL && strcmp(string, "\n") != 0)
    {
        dao_xu(string);
        puts(string);
        printf("请输入字符串:");
    }
}
void dao_xu(char * src_string){
    int len = strlen(src_string);
    char emp[len];
    for(int index = 0;index < len;index++)
        *(emp + index) = *(src_string + len - 1 -index);
    for(int index = 0;index <len;index++)
        *(src_string + index) = *(emp + index);
}
/* 另外一种方式
void dao_xu(char *src_string) {
    int len = strlen(src_string);
    
    for (int index = 0; index < len / 2; index++) {
        char temp = src_string[index];
        src_string[index] = src_string[len - 1 - index];
        src_string[len - 1 - index] = temp;
    }
}
*/