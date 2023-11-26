#include<stdio.h>
/*void copy_arr(double t[],double s[],int n);
void copy_ptr(double *t,double *s,int n);
void copy_ptrs(double *t,double *s_first,double *s_last);
int main(){
    double arr[5] = {1.1,2.2,3.3,4.4,5.5};
    double t1[5],t2[5],t3[5];
    copy_arr(t1,arr,5);
    cpoy_ptr(t2,arr,5);
    copy_pts(t3,arr,arr+5);
    return 0;
}
void copy_arr(double t[],double s[],int n){
    for(int i = 0;i< n;i++){
        t[i] = s[i];
    }
}
void copy_ptr(double *t,double *s,int n){
    for(int i = 0;i< n;i++){
        *(t+i) = *(s+i);
    }
}
void copy_ptrs(double *t,double *s_first,double *s_last){
    for(int i = 0;(s_last- s_first)>i;i++){
        *(t+i) = *(s_first+i);
    }
}*///复制一维数组


/*void copy_arr(int n,int m,double t[n][m],const double arr[n][m]);
void show_arr(int n,int m,const double arr[n][m]);
int main(){
    int n = 3,m = 5;
    double t[n][m],arr[][5] = {
        {0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4},
        {9.1,8.5,2.3,6.1,8.4},
    };
    copy_arr(n,m,t,arr);
    show_arr(n,m,t);
    return 0;
}
void copy_arr(int n,int m,double t[n][m],const double arr[n][m]){
    for(int i = 0;i<n;i++)
        for(int j = 0;j<m;j++)
            t[i][j] = arr[i][j];
}
void show_arr(int n,int m,const double arr[n][m]){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++)
            printf("%f ",arr[i][j]);
        printf("\n");
    }   
}*/