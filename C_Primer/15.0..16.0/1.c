#include<stdio.h>
#include<limits.h>
char* shier(int,char*);
int ershi(char*);
void show(const char*);
/*int main(){
    char str[CHAR_BIT*sizeof(int)+1];
    int num;
    puts("enter number");
    while(scanf("%d",&num) == 1){
        itobs(num,str);
        printf("%d is ",num);
        show(str);
        putchar('\n');
    }
    return 0;
}
int main(){
    puts("enter number");
    char num[32];
    scanf("%s",num);
    printf("%d",ershi(num));
    return 0;
}*/
int ershi(char* n){
    int sum = 0;
    while(*n != '\0'){
        sum *= 2;
        sum = sum+*n++-'0';
    }
    return sum;
}
char* shier(int n,char* ps){
    const int size = CHAR_BIT*sizeof(int);
    for(int i = size-1;i>=0;i--,n>>=1)
        ps[i] = (01 & n)+'0';
    ps[size] = '\0';
    return ps;
}
void show(const char* str){
    int i = 0;
    while(str[i]){
        putchar(str[i]);
        if(++i % 4 == 0 && str[i])
            putchar(' ');
    }
}

#include<time.h>
void delay(double time);
int main(){
    puts("enter your delay time");
    double time;
    scanf("%lf",&time);
    delay(time);
    return 0;
}
void delay(double time){
    clock_t start = clock();
    printf("let's me see %f delay time:\n",time);
    clock_t now = clock();
    double i = (double)(now-start)/CLOCKS_PER_SEC;
    while(i<time){
        now = clock();
        printf("delay time %.2f second\n",i);
        break;
    }
}
