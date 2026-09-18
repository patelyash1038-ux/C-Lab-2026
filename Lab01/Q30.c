#include<stdio.h>

int main(){
    int num,NUM,remainder,final=0;
    printf("Enter one no.= ");
    scanf("%d",&num);
    NUM=num;
    while(NUM!=0){
        remainder=NUM%10;
        final = (final*10) + remainder;
        NUM/=10;
    }
    printf("Reversed no.= %d", final);
    return 0;
}