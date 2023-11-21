#include<stdio.h>
/*int main(){
    char ch;
    int count =0;
    printf("输入一串句子，并以#结束:");
    while((ch = getchar()) != '#'){
        if(ch == '.'){
            printf("!");
            count++;
        } 
        else if(ch == '!'){
            printf("!!");
            count++;
        }
        else{
            printf("%c",ch);
        }
    }
    printf("\n");
    printf("一共进行了%d次替换\n",count);
    return 0;
}*/
int main(){
    char ch;
    int count =0;
    printf("输入一串句子，并以#结束:");
    while((ch = getchar()) != '#'){
        switch(ch){
            case '.':printf("!");count++;break;
            case '!':printf("!!");count++;break;
            default:printf("%c",ch);break;
        }
    }
    printf("\n");
    printf("一共进行了%d次替换\n",count);
    return 0;
}