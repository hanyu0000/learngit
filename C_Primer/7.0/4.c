#include<stdio.h>
int main(){
    char ch;
    int n = 0;
    int i = 0;
    printf("请输入一句话：");
    while((ch = getchar()) != '#'){
        switch(ch){
            case 'e':i = 1;break;
            case 'i':
                if(i ==1){
                    n++;
                    i = 0;
                }break;
            default:i = 0;
        }
    }
    printf("ei出现了%d次\n",n);
    return 0;
}