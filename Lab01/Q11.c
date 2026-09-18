#include<stdio.h>

int main(){
    int T;
    printf("Enter total time in seconds-");
    scanf("%d", &T);
    int H=(T/3600);
    int M=(T%3600)/60;
    int S=T%60;
    printf("current timing is= %d:%d:%d",H,M,S);
    return 0;
}