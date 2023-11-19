#include<stdio.h>
int main(){
    printf("输入序列次数：");
    double n;
    scanf("%lf",&n);
    double a= 0.0,b= 0.0;
    double q = 1.0;
    for(double i = 1.0;i<=n;i++)
        a += q/i;
    for(double i = 1.0;i<=n;i++){
        b += q/i;
        q *= -1.0;
    }
    printf("%f\n%f\n",a,b);
    return 0;
}