#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter two numbers-");
    scanf("%d %d", &a,&b);
    printf("before swapping a=%d , b=%d\n", a,b);
    //now taking variable c
    c=a;
    a=b;
    b=c;
    printf("after swapping a=%d , b=%d\n" , a,b);


    return 0;
}