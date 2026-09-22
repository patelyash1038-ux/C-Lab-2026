#include<stdio.h>

int main(){
    int n=0,sum=0;
    while(n>=0){
        sum+=n;
        printf("Enter no.");
        scanf("%d",&n);
    }
    printf("the sum of all positive no is=%d\n",sum);
    return 0;
}