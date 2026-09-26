#include<stdio.h>

int main(){
    int a[3][3],temp;
    printf("Enter Elements row wise\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                scanf("\t%d",&a[i][j]);
        }
    }
    printf("Matrix before transpose\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    for(int j=0;j<3;j++){
        temp=a[0][j];
        a[0][j]=a[j][0];
        a[j][0]=temp;
    }
    for(int j=1;j<3;j++){
        temp=a[1][j];
        a[1][j]=a[j][1];
        a[j][1]=temp;
    }
    printf("Matrix after transpose\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}