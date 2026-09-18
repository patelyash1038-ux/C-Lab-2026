#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    if(a%2==0&&a!=0){
        printf("a is even");
    }
    else if(a%2!=0&&a!=0){
        printf("a is odd");
    }
    else{
        printf("a is 0");
    }
    return 0;
}