#include<stdio.h>

int main(){
    int N;
    float M=0,F=1,i;
    printf("Enter one no");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        F*=i;
        M+= i/F;
    }
    printf("The value is=%.2f",M);
    
    return 0;
}