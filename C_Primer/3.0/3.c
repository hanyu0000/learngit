#include<stdio.h>
int main(){
    int a;
    printf("输入杯数：");
    scanf("%d",&a);
    float b = a/2;
    printf("品脱：%lf\n",b);
    printf("盎司：%d\n",a*8);
    printf("汤勺：%d\n",a*8*2);
    printf("茶勺：%d\n",a*8*2*3);
    return 0;
}