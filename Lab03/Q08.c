#include<stdio.h>

int main(){
    int a[3][3];
    printf("Enter Elements row wise");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                scanf("%d",&a[i][j]);
        }
    }
    int r1=0,r2=0,r3=0;
    for(int i=0;i<3;i++){
        r1+=a[0][i];
    }
    
    for(int j=0;j<3;j++){
        r2+=a[1][j];
    }
    for(int k=0;k<3;k++){
        r3+=a[2][k];
    }
    
    
    printf("The sum of row 1 is %d\n",r1);
    printf("The sum of row 2 is %d\n",r2);
    printf("The sum of row 3 is %d\n",r3);
    return 0;
}