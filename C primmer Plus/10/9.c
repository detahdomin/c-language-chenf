#include<stdio.h>
double list_arr(const list[a][b], list_two[a][b], int a, int b);
double list_arr_awa(double list[a][b], int a, int b);
int main(void){
    int m = 5;
    int n = 3;
    double list_arr_ar[n][m],source[][5] = {
        {1.2, 1.3, 1.4, 1.4, 1.4},
        {1.2, 1.3, 1.5, 1.4, 1.4},
        {1.2, 1.2, 1.4, 1.4, 1.4},
    };
    list_arr(list_arr_ar, source,n , m);
    list_arr_awa(source, n, m);
    return 0;
}
double list_arr(const list[a][b], list_two[a][b], int a, int b){
    for(int i = 0,i<a,i++){
        for(int j = 0,j<b, j++)
            list[i][j] == list_two[i][j];
    }
}
double list_arr_awa(double list[a][b], int a, int b){
    for(int i = 0,i<a,i++){
        for(int j = 0,j<b, j++)
            printf("%g",list[a][b])
    }
}