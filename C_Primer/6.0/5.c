#include<stdio.h>
int main(){
    double arr1[8],arr2[8] = {0};
    printf("请为数组赋8个数值:");
    for(int i = 0;i<8;i++){
        scanf("%lf",&arr1[i]);
    }
    arr2[0] = arr1[0];
    for(int i = 1;i<8;i++){
        arr2[i] = arr1[i]+arr2[i-1];
    }
    for(int i = 0;i<8;i++){
        printf("%6.1f",arr1[i]);
    }
    printf("\n");
    for(int i = 0;i<8;i++){
        printf("%6.1f",arr2[i]);
    }
}