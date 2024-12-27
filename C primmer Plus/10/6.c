#include<stdio.h>
void s_sort(double number[], int n);
int main(void){
    double souce[12] = {2.5, 3.2, 1.2, 1.6, 2.4, 0.1, 5.2, 0.9, 0.3 , 0.9, 1.4, 7.3}
    s_sort(souce,12)
    return 0 ;
}
void s_sort(double number[], int n){
    double tmp;
    for(int j = 0,j < n -1;j++){
        for(int i = 0,i < n - 1 - j;i++){
            if number[i] >  number[i+1]{
                tmp = number[i];
                number[i] = number[i+1];
                number[1+1] = tmp;
            }
        }
    }
}