#include<stdio.h>
#include<string.h>
int main(){
    printf("输入你的姓名：");
    char name[50];
    scanf("%s",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    int len = strlen(name);
    printf("%*s\n",(len+3),name);
    return 0;
}