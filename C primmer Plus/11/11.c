#include<stdio.h>
#define SIZE 11

void yuan_xu(int number,char[][SIZE]);
void ascil(int number,char[][SIZE]);
void length(int number,char[][SIZE]);
void words(int number,char[][SIZE]);
int input_String(char * input,char String[][SIZE]);

int main(void){
    char String[10][SIZE];
    int choose;
    input_String(String);
    show_menu();
    scanf("%d",&choose);
    while (choose != 5)
    {
        switch (choose)
        {
        case 1:yuan_xu();
            break;
        case 2:ascil();
            break;
        case 3:length();
            break;
        case 4:words();
            break;
        case 5:break;
        default:
            printf("Error\n");
            break;
        }
    }
}

void show_menu(){
    printf("=====================================\n");
    printf("1) print yuan_xu    2)print ascil\n");
    printf("3) print length     4)print words\n");
    printf("5)  quet\n");
    printf("=====================================\n");
}
int input_String(char * input,char String[][SIZE]){
    
}