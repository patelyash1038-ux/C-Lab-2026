#include<stdio.h>

int main(){
    int a,b,c,M;
    //program to read three nos and print max
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if(a>b){
        if(a>c){
            M=a;
        }
    }
    else if(c>b){
        if(c>a){
            M=c;
        }
    }
    else{
        M=b;
    }
    printf("MAximum nos of these three is %d", M);

    return 0;
}