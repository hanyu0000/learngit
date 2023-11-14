#include<stdio.h>
#include<string.h>
int main(){
    char lastname[50];
    char name[50];
    printf("enter name:");
    scanf("%s",name);
    printf("enter lastname:");
    scanf("%s",lastname);
    int n = strlen(name);
    int ln = strlen(lastname);
    printf("%s %s\n",name,lastname);
    printf("%*d %*d\n",n,n,ln,ln);
    return 0;
}