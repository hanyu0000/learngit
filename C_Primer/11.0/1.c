#include<stdio.h>
/*char* read_char(char* st);
int main(int argc,char *argv[]){
    char test[40];
    printf("输入一串字符:");
    read_char(test);
    puts(test);
    return 0;
}
char* read_char(char* st){
    int i = 0;
    do{
        st[i] = getchar();
    }while(st[i] != EOF && ++i < 40);
    return st;
}*/


//mystrncpy
#include<string.h>
char* mystrncpy(char* dest,char* src,int n);
int main(){
    char destination[80],source[80];
    printf("输入一串字符:");
    fgets(source,stdin);
    printf()
}
char* mystrncpy(char* dest,char* src,int n);