#include<stdio.h>
/*int main(){
    printf("输入一串字符:");
    char ch;
    int a=0,b=0,c=0;
    while((ch = getchar()) != '#'){
        if(ch == ' ')
            a++;
        else if(ch =='\n')
            b++;
        else
            c++;
    }
    printf("空格有%d个,\\n有%d个,其他字符有%d个",a,b,c);
    return 0;
}*/

int main(){
    printf("输入一串字符:");
    char ch;
    int n = 0;
    while((ch = getchar()) != '#'){    
        printf("'%c'对应的ASCII码值为%03d. ",ch,ch);
        n++;
        if(n%8 == 0){
            printf("\n");
        }
    }
    return 0;
}