#include<stdio.h>

int main(){
    int n;
    int m=1;
    printf("Enter one no: ");
    scanf("%d", &n);
    while(n>=1){
        m=m*n;
        n--;
    }
    printf("the value of factorial is=%d", m);

    return 0;
}