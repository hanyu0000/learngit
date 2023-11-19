#include<stdio.h>
int main(){
    printf("请输入天数：");
    int a = 1;
    while(a>0){
        int n;
        scanf("%d",&n);
        a = n;
        printf("%d days are %d weeks,%d days\n",n,n/7,n%7);
    }
    return 0;
}