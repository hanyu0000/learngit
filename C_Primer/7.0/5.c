#include<stdio.h>
int main(){
    int a;
    do{
        printf("输入一个正整数:");
        scanf("%d",&a);
        if(a < 2){
            if(a == 0)break;
            printf("输入错误,重新输入:");
            continue;
        } 
         for(int i = a;i>1;i--){
            int is_prime = 1;
            for(int j = 2;j<=i/2;j++){
                if(i % j == 0){
                    is_prime = 0;
                    break;
                }
            }  
        if(is_prime == 1)
            printf("%d是素数\n",i);
        }
        printf("\n");
    }while(a != 0);
    return 0;
}