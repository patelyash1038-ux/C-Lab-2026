#include<stdio.h>

int main(){
    // READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
    
    int N , sum=0, n;
    scanf("%d",&N);
    while(N>0){
        sum+= N%10;
        N/=10;
    }
    while(sum>10){
        n=0;
    while(sum>0){
        n+=sum%10;
        sum/=10;
    }
    sum=n;
}
    
    printf("Final output=%d", sum);
    return 0;
}