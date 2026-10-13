#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    int b[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&b[i]);
    }
    int c[10];
    for(int i=0;i<=9;i++){
        c[i]=a[i]+b[i];
        printf("%d\n",c[i]);
    }

    return 0;
}