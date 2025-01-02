#include<stdio.h>
#define ROWS 3
#define COLS 5
void input_arr(int rows, double arr[][COLS]);
double col_average(int cols, double arr[]);
double arr_average(int rows, double arr[][COLS]);
double arr_max(int rows, double arr[][COLS]);
int main(void){
    double array[ROWS][COLS];
    input_arr(ROWS,array);
    for(int i = 0;i < ROWS; i++)
        printf("%5g",col_average(COLS, array));
    printf("%5g",arr_average(ROWS, array));
    printf("%5g",arr_max(ROWS,array));
    return 0;
}
void input_arr(int rows, double arr[][COLS]){
    for(int i = 0;i < rows; i++)
        for(int j = 0; j<COLS; j++)
            scanf("%lf", &arr[i][j]);
}
double col_average(int cols, double arr[]){
    int sum = 0;
    for(int i = 0;i < cols; i++)
        sum += arr[i];
    return sum / cols;
}
double arr_average(int rows, double arr[][COLS]){
    int sum = 0;
    for(int i = 0;i < rows; i++)
        for(int j = 0;j < COLS; j++)
            sum += arr[i][j];
    return sum / rows * COLS;
}
double arr_max(int rows, double arr[][COLS]){
    int max = arr[0][0];
    for(int i = 0;i < rows; i++)
        for(int j = 0; j < COLS; j++)
            if(max < arr[i][j]) max = arr[i][j];
    return max;
}
