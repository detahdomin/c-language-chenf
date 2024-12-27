#include<stdio.h>
#include<string.h>
int main(void)
{   
    char name[20];
    int a;
    scanf("%s",name);
    printf("\"%s\"",name);
    printf("\"%-20s\"",name);
    printf("\"%20s\"\n",name);
    a = strlen(name);
    printf("%*s",a+3,name);
    return 0;
}