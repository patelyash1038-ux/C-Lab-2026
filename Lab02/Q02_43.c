#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    int sum;
    for(int i=0;i<=9;i++){
        sum+=a[i];
    }
    printf("The sum of all elememts is %d",sum);
    return 0;
}