#include<stdio.h>
int main(){
    printf("输入一个整数:");
    int input,sg=0,db=0;
    int i= 0,j =0;
    while(scanf("%d",&input)){
        if(input == 0) break;
        if(input%2 != 0){
            sg += input;
            i++;
        }
        else{ 
            db += input;
            j++;
        }
    }
    printf("奇数的个数:%d\n奇数的平均值是:%g\n偶数的个数:%d\n偶数的平均值是:%g\n",i,1.0*sg/i,j,1.0*db/j);
    return 0;
}