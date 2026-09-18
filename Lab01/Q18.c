#include<stdio.h>

int main(){
    int a,b,c,M;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    M= (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("maimum no is %d", M);
    return 0;
}