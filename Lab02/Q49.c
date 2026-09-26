#include<stdio.h>
// SELECTION sort Find the smallest element from the unsorted portion and put it at the correct position.
int main(){
    int a[10]={4,3,5,6,1,0,5,8,9,7};
    for(int i=0;i<9;i++){
        int min=i;
        for(int j=i;j<10;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }    
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;

        
    }
    printf("Sorted array:\n");
    for(int i=0;i<=9;i++){
    printf("%d",a[i]);
    }
    return 0;
}