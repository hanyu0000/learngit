#include<stdio.h>
int main(){
    char arr[] = "Smile!";
    for(int i = 0;i<3;i++){
        for(int j = 3-i;j>0;j--){
            printf("%s",arr);
        }
        printf("\n");
    }
    return 0;
}