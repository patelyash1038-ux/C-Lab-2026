#include<stdio.h>

int main(){
    int a,b,c,d,e;
    printf("enter your mathematics marks:\n");
    scanf(" %d", &a);
    printf("enter your science marks:\n");
    scanf(" %d", &b);
    printf("enter your S.S marks:\n");
    scanf(" %d", &c);
    printf("enter your Hindi marks:\n");
    scanf(" %d", &d);
    printf("enter your english marks:\n");
    scanf(" %d", &e);
    float T=a+b+c+d+e;
    printf("Your total =%f\n", T);
    float P=T/5;
    printf("your percentage =%f\n", P);


    return 0;
}