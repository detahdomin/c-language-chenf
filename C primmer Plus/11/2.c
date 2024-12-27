 #include<stido.h>
 char * instr_string(char * string, int n);
 int main(void){
    char string[40];
    instr_string(string, 40);
    puts(string);
 }
 char * instr_string(char * string, int n){
   int i = 0;
   do
   {
      *(string+i) = getchar();
      if(string[i] !=' ' || string[i] !='\t' || string[i] !='\n')
        break;
   }
   while (++i < n && string[i] != EOF);
   return string;
 }
