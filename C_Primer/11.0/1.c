#include<stdio.h>
#include<string.h>
//1
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
}

//7.mystrncpy
char* mystrncpy(char* dest,char* src,int n);
int main(){
    const int size = 80;
    char destination[size],source[size];
    printf("输入一串字符:");
    fgets(source,size,stdin);
    printf("输入要复制的数字:");
    int i = 0;
    scanf("%d",&i);
    while(*source != '\n'){
        mystrncpy(destination,source,i);
        printf("输出结果:");
        puts(destination);
        while(getchar() != '\n')break;
        printf("(新的)输入一串字符:");
        fgets(source,size,stdin);
        printf("输入要复制的数字:");
        scanf("%d",&i);
    };
    return 0;
}
char* mystrncpy(char* dest,char* src,int n){
    int count = 0;
    while(*src != '\0' && count <n){
        *(dest + count++) = *src++;
    }
    if(count<0){
        while(count<n)
            *(dest + count++) = '\0';
    }
    return dest;
}*/

//strchr
#define SIZE 80
char* mystrchr(char* str,char c);
/*int main(int argc,char *argv[]){
    char source[SIZE];
    char c = ' ';
    char* str;
    puts("enter a string:");
    fgets(source,SIZE,stdin);
    while(c != '\n'){
        puts("enter a char to find:");
        while((c = getchar()) == '\n')
            continue;
        str = mystrchr(source,c);
        if(str != NULL)
            printf("find the char '%c' in the %p:",*str,str);
        else
            printf("'%c' not found:",c);
    }
    return 0;
}*/
char* mystrchr(char* str,char c){
    while(*str != '\0'){
        if(*str == c)
            return str;
        str++;
    }
    return NULL;
}

char* str(char* str);
int main(int argc,char *argv[]){
    char string[SIZE];
    char* p = NULL;
    puts("enter a string:");
    fgets(string,SIZE,stdin);
    p = str(string);
    printf("%s",string);
    return 0;
}
char* str(char* s){
    int length = strlen(s);
    char temp[length];
    for(int i = 0;i<length;i++)
        *(temp + i) = *(s + length-1-i);
    for(int i = 0;i<length;i++)
        *(s + i) = *(temp + i);
    return s;
}