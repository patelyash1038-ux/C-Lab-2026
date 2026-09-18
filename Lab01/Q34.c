#include<stdio.h>

int main(){
    int n,n1,n2,n3,i;
    printf("Enter no. of terms of fibonnaci seq");
    scanf("%d",&n);
    n1=0,n2=1;
    for(i=1;i<=n;i++){
        printf("%d\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}