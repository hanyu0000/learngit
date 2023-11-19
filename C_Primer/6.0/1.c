#include<stdio.h>
int main(){
    for(int i = 1;i<=5;i++){
        int j = 1;
        while(j <=i){
            printf("#");
            j++;
        }
        printf("\n");
    }
    return 0;
}
int main(){
    int a = 70;
    for(int i = 0;i<6;i++){
        for(int j = a;j>=70-i;j--)
            printf("%c",j);
        printf("\n");
    }
    return 0;
}
int main(){
    int c = 'A';
    for(int i = 1;i<=6;i++){
        for(int j = 0;j<i;j++,c++)
            printf("%c",c);
        printf("\n");
    }
    return 0;
}