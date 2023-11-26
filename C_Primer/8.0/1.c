#include<stdio.h>
int main(){
    int count = 0;
    char ch;
    while((ch = getchar()) != EOF){
        count++;
    }
    printf("一共有%d个字符数",count);
    return 0;
}
