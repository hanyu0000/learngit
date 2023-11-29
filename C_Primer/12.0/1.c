#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//6.
int main(){
    int date[11];
    int datum;
    for(int i = 1;i<=10;i++){
        srand(i);
        for(int i = 0;i<= 10;i++)
            date[i] = 0;
        for(int i = 0;i<= 1000;i++){
            datum = rand()%10+1;
            date[datum]++;
        }
        for(int i = 0;i<= 10;i++)
            printf("%-4d",date[i]);
        printf("\n");
    }
    return 0;
}

//9
int main(){
    printf("需要输入几个单词:");
    int n;
    scanf("%d",&n);
    printf("Enter your words:");
    char** pst = (char**)malloc(n*sizeof(char*));
    for(int i = 0;i<n;i++){
        char ch[100];
        scanf("%s",ch);
        int length = strlen(ch);
        char* str = (char*)malloc(length*sizeof(char*));
        strcpy(str,ch);
        *(pst+i) = str;
    }
    for(int i = 0;i<n;i++){
        printf("%s\n",*(pst+i));
    }
    free(pst);
    return 0;
}