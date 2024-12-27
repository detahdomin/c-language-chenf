#include<stdio.h>
#define ROWS 12
#define CLOS 5
void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t, double *s_first, double *s_last);
void copy_2d_array(double t[][ROWS], double s[][ROWS] ,int n);
void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n);
int main(void)
{
    double src[] = {1, 2, 3, 4, 5, 6, 7};
    copy_ptr(tang, src+2, 3)
    double targ[3];
    return 0;
}
void copy_arr(double t[], double s[], int n){
     for(int i = 0;i < n,i++)
        t[i] = s[i];
}
void copy_ptr(double *t, double *s, int n){
    for(int i = 0;i < n;i++)
        *(t+i) = *(s+i);
}
void copy_ptrs(double *t, double *s_first, double *s_last){
    for(int i = 0; (s_last - s_first) > i,i++)
    /*for(int i = 0; (s_last - s_first) > 0;i++,s_first++)*/
        *(t+i) = *(s_first+i);
} 
void copy_2d_array(double t[][ROWS], double s[][ROWS] ,int n){
    for(int i = 0;i < n;i++)
        copy_arr(t[i],s[i],ROWS);
}
void copy_2d_ptr(double (*t)[ROWS], double (*s)[ROWS], int n){
    for(int i = 0;i < n;i++)
        copy_ptr(*(t+i),*(s+i),ROWS);
}