#include<stdio.h>
#include<string.h>
#define SIZE 80
// void remove_empty_sting(char * string);
void remove_empty_sting(char string[]);
int main(void){
  char String[SIZE];
  printf("plase Ether your String(Ether:quit):");
  fgets(String,SIZE,stdin);
  while(strcmp(String,"\n") != 0){
    remove_empty_sting(String);
    puts(String);
    printf("plase again Ether your String(Ether:quit):");
    fgets(String,SIZE,stdin);
  }
  return 0;
}
//这个函数使用指针方式指针
/*
void remove_empty_sting(char * string){
  char * string_temp = string;
  int count = 0;
  while (*string != '\0')
  {
    if(*string == ' '){
      string++;
      count++;
    }
    else{
      *string_temp++ = *string++;
    }
  }
  while (count--) *string_temp++ = '\0';
}
//这个函数使用数组方式指针
*/
void remove_empty_sting(char string[]){
  int i = 0,j = 0,conut = 0;
  while (string[i] != '\0')
  {
    if(string[i] == ' '){
      i++;
      conut++;
    }
    else{
      string[j++] = string[i++];
    }
  } 
  while (conut--) string[j++] = '\0';
}
