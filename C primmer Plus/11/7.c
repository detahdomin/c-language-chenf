#include<stdio.h>
#include<string.h>
#define SIZE 80
char * mystrncpy(char * s1, char * s2, int n);
int main(int argc, char *avgv[]){
    int shu;
    char string_one[SIZE],string_two[SIZE];
    printf("������:\n");
    fgets(string_two,SIZE,stdin);
    printf("����������:\n");
    scanf("%d",&shu);
    while (strcmp(string_two, "quit\n"))
    {
        mystrncpy(string_one, string_two, shu);
        printf("���:");
        puts(string_one);
        while(getchar() != '\n')
            continue;
        printf("������:\n");
        fgets(string_two,SIZE,stdin);
        printf("����������:\n");
        scanf("%d",&shu);
        
    }
    return 0;
}
char * mystrncpy(char * s1, char * s2, int n){
    int index = 0;
    while(*s2 != '\0' && index < n){
        *(s1+index++) = *s2++;
    }
    if(index < n){
        while(index < n)
            *(s1+index++) = '\0';
    }
    return s1;
}