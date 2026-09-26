#include<stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int b[10]={10,9,8,7,6,5,4,3,2,1};
    printf("Before");
    for(int i=0;i<=9;i++){
    printf("%d||%d\n",a[i],b[i]);
    }
    int c[10];
    for(int i=0;i<=9;i++){
        c[i]=a[i];
        a[i]=b[i];
        b[i]=c[i];
    }
    printf("After");
    for(int i=0;i<=9;i++){
    printf("%d||%d\n",a[i],b[i]);
    }

    return 0;
}