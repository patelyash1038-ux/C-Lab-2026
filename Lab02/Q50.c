#include<stdio.h>
//Bubble sort sort in 2-2 pair
int main(){
    int a[10]={9,8,4,6,5,1,3,2,0,7};
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(int i=0;i<=9;i++){
    printf("%d",a[i]);
    }
    return 0;
}