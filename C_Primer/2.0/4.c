#include<stdio.h>
void one_three();
void two();
int main(){
    one_three();
}
void one_three(){
    printf("starting now:\n");
    printf("one\n");
    two();
    printf("done!\n");
}
void two(){
    printf("two\n");
    printf("three\n");
}