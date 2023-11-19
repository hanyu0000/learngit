#include<stdio.h>
int main(){
    const int Dunbar = 150;
    int n = 1;
    int sum = 5;
    while(sum<150){
        printf("第%d周有%d个朋友",n,sum);
        n++;
        sum = (sum-1)*2;
        printf("\n");
    }
    return 0;
}