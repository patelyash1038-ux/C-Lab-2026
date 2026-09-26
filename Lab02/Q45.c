#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    int positive=0,negative=0,zero=0;
    for(int i=0;i<=9;i++){
        if(a[i]>0){
         positive+=1;
        }
        else if(a[i]<0){
            negative+=1;
        }
        else if(a[i]==0){
            zero+=1;
        }
    }
    printf("The positive elements of all elememts is %d\n" ,positive);
    printf("The negative elements of all elememts is %d\n",negative);
    printf("The zero elements of all elememts is %d",zero);
    return 0;
}