#include<stdio.h>

int main(){
    int h,b;
    printf("enter height of triangle=");
    scanf("%d", &h);
    printf("enter base of triangle=");
    scanf("%d", &b);
    float A=0.5*b*h;
    printf("area of triangle= %f\n", A);
    return 0;
}