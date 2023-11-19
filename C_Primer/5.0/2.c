#include<stdio.h>
int fun(double n);
int main(){
    printf("输入一个double类型的数:");
    double a;
    scanf("%lf",&a);
    fun(a);
    return 0;
}
int fun(double n){
    n = n*n*n;
    printf("%f\n",n);
}