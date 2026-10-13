#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    int max=0,sec_max=0,has_sec_max=0;
    for(int i=0;i<=9;i++){
        if(a[i]>max){
         sec_max=max;
         max=a[i];
         has_sec_max=1;
        }
        else if(a[i]>sec_max && has_sec_max==0){
            sec_max=a[i];
            has_sec_max=1;
        }
    }
    printf("The max elements of all elememts is %d\n" ,max);
    printf("The sec_max elements of all elememts is %d\n",sec_max);
    return 0;
}