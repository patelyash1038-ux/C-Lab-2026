#include<stdio.h>

int main(){
    char operator;
    float a,b,c;
    printf("Enter one operater (+,-,*,/): ");
    scanf("%c", &operator);
    printf("enter two numbers:\n");
    scanf("%f %f", &a,&b);
    switch(operator){
        case '+':
         printf("your addition is %.2f", c=a+b);
         break;
        case '-':
         printf("your substraction is %.2f", c=a-b);
         break;
        case '*':
         printf("your multiplication is %.2f", c=a*b);
         break;
        case '/':
         printf("your division is %.2f", c=a/b);
         break;
        default:
         printf("unvalid expression");



    }
    return 0;
}