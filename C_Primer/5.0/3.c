#include<stdio.h>
void Temperatures(double n);
int main(){
    printf("输入一个华氏温度:");
    double i = 1;
    while(i>0){
    double a;
    i = scanf("%lf",&a);
    Temperatures(a);
    }
    return 0;
}
void Temperatures(double n){
    const double a = 5.0/9.0;
    const double b = 32.0;
    const double c = 273.16;
    printf("华氏温度：%.2f\n",n);
    printf("摄氏温度：%.2f\n",a*(n-b));
    printf("开氏温度：%.2f\n",n+c);
}