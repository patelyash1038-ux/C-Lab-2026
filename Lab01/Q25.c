#include<stdio.h>

int main(){
    int n,i=0;
    printf("Enter one no.: ");
    scanf("%d", &n);
    while(n>0){
        int m=n*i;
        printf("%d*%d= %d\n", n,i,m);
        i++;
        if(i>10){
            break;
        }
    }
    return 0;
}