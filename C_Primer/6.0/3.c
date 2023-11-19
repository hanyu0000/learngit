#include<stdio.h>
int main(){
    int a,b;
    printf("输入表格的上限和下限：");
    scanf("%d%d",&a,&b);
    for(int i = a;i<=b;i++){
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}