#include<stdio.h>

int main(){
    int a[3][3];
    printf("Enter Elements row wise\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                scanf("%d",&a[i][j]);
        }
    }
    int b[3][3];
    int c[3][3],sum;
    
    printf("Enter Elements row wise\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Matrix after adding two matrix\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                printf("\t%d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}