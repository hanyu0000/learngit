#include<stdio.h>
int main(){
    float num;
    printf("Enter a floating-point valis:");
    scanf("%f",&num);
    printf("%f\n%e\n%a\n",num,num,num);
    return 0;
}