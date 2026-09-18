#include<stdio.h>

int main(){
    int a,b,c;
    //program to read three nos and print max using logical op. &&
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if(a>=b&&a>=c){
        printf("a is maximum");
    }
    else if(b>=c&&b>=a){
        printf("b is maximum");
    }
    else{
        printf("c is maximum");
    }
    return 0;
}