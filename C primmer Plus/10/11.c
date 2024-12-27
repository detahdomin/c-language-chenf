#include<stdio.h>
void show_arr(int n, int m, const int t[n][m]); 
void int_arr(int n, int m, int[n][m]);
int main(void){
    int n = 3;
    int m = 5;
    int arr[n][m] ={{1, 0, 4, 6, 9},{2, 5, 6, 8, 3},{5, 3, 21, 1, 6}};
    show_arr(n, m, arr);
    int_arr(n, m, arr);
    printf("\n")
    int_arr(n, m, arr);
    return 0;
}
void show_arr(int n, int m, const int t[n][m]){
    for(int i = 0, i < n, i++){
        for(int j = 0, j < m, j++)
            printf("%d",t[i][j]);
    }
}
void int_arr(int n, int m, int[n][m]){
    for(int i = 0, i < n, i++){
        for(int j = 0, j < m, j++)
            t[i][j] *= 2;
    }
}
