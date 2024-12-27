#include<stdio.h>
#include<ctype.h>
#define INDEX 80
char * get_word(char * string, int n);
int main(int argc, char *argc){
    char String[INDEX];
    get_word(String,INDEX);
}
char * get_word(char * string, int n){
    char input[INDEX]；
    fgets(input,INDEX,stdin)
    char * i = input;
    while ((*i ==" " ||*i == "\n" || *i =="\t") && *i !='\0')
    {
        i++;
    }
    while (*i !=" " &&*i != "\n" && *i !="\t" && *i !='\0' && i < n)
    {
        *string++ = *i++;
    }
    
}