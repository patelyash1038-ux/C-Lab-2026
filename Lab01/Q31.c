#include<stdio.h>

int main(){
    int num,NUM,remainder,final=0;
    printf("Enter one no.= ");
    scanf("%d",&num);
     NUM=num;
    while(NUM!=0){
        remainder=NUM%10;
        final = final + remainder;
        NUM/=10;
    }
    printf("The sum of all digits is %d", final);
    return 0;
}