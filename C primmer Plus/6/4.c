#include<stdio.h>
int main(void)
{
    char ch;
    int ti_huan;
    while((ch = getchar()) != '#'){
        if (ch == '!'){
            ch = "!!";
            ti_huan++;
        }
        else if (ch == '.'){
            ch ='!';
            ti_huan++;
        }
    }
    printf("%d",ti_huan);
}