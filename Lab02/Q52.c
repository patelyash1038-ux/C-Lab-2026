#include<stdio.h>

int main(){
    int a[3][3];
    printf("Enter Elements row wise");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                scanf("%d",&a[i][j]);
        }
    }
    int min,max;
    min=a[0][0];
    max=a[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
            else if(a[i][j]<min){
                min=a[i][j];
            }
        }
    }
    printf("The Max and Min elements are %d %d",max,min);
    return 0;
}