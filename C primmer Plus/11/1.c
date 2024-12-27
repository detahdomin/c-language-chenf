 #include<stido.h>
 char * instr_string(char * string, int n);
 int main(void){
    char string[40];
    instr_string(string, 40);
    puts(string);
 }
 char * instr_string(char * string, int n){
   do
   {
      *(string+i) = getchar();
   }
   while (int i = 0;i < n and string[i] != EOF;i++);
   return string;
 }
