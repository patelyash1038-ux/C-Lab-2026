#include<stdio.h>

int main(){
    int n,max,min,num,i;
    printf("Enter no of elements");
    scanf("%d", &n);
    if(n<2){
        printf("Please add minimum 2 elemens");
    }
    printf("Enter Numbers\n");
    scanf("%d",&num);
    max=num;
    min=num;
    for(i=1;i<n;i++){
        scanf("%d", &num);
        if(num>max){
            max=num;
        }
        else if(num<min){
            min=num;
        }
    }
    printf("The min no. is %d",min);
    printf("The max num is %d",max);
    return 0;
}