#include<stdio.h>

int main(){
    int N,i,X;
    printf("Enter one no.");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        X=i*i;
        printf("%d\n",X);
    } 
    return 0;
}