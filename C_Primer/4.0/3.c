#include<stdio.h>
#include<float.h>
int main(){
    double a = 1.0/3.0;
    float b = 1.0/3.0;
    printf("FLT_DIG:%d\nDBL_DIG:%d\n",FLT_DIG,DBL_DIG);
    printf("double:%f %.12f %.16f\n",a,a,a);
    printf("float:%f %.12f %.16F\n",b,b,b);
    return 0;
}