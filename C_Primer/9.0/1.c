#include<stdio.h>
/*void order(double *a,double *b,double *c){
    double temp;
    if(*a>*b){
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a>*c){
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b>*c){
        temp = *b;
        *b = *c;
        *c = temp;
    }
}
int main(){
    double a,b,c;
    printf("输入3个浮点数:");
    scanf("%lf%lf%lf",&a,&b,&c);
    order(&a,&b,&c);
    printf("a=%f b=%f c=%f\n",a,b,c);
    return 0;                                                                                                 
}*/

//计算的x的n次幂
double power(double x,int n);
int main(){
    double x,xpow;
    int n;
    printf("请输入要计算的x的n次幂:(enter q to quit)");
    while(scanf("%lf%d",&x,&n) == 2){
        xpow = power(x,n);
        printf("%.3f的%d次幂为%.3f\n",x,n,xpow);
        printf("请输入下一个数:");
    }
    return 0;
}
double power(double x,int n){
    double pow = 1;
    if(x == 0 && n == 0){
        printf("0的0次幂未定义,返回为1\n");
        return 1;
    }
    if(x == 0)return 0;
    if(n == 0)return 1;
    else if(n>0){
        for(int i = 1;i<=n;i++){
            pow *= x;
        }
        return pow;
    }
    else{
        for(int i = 1;i<=-n;i++){
            pow *= x;
        }
        return 1/pow;
    }
}