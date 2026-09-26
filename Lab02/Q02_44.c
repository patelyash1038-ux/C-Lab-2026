#include<stdio.h>

int main(){
    int a[10];
    printf("Enter 10 no.: ");
    for(int i=0;i<=9;i++){
    scanf("%d",&a[i]);
    }
    int even=0,odd=0;
    for(int i=0;i<=9;i++){
        if(a[i]%2==0&&a[i]!=0){
            even+=1;
        }
        else if(a[i]%2!=0&&a[i]!=1){
            odd+=1;
        }
    }
    printf("The even elements of all elememts is %d\n",even);
    printf("The odd elements of all elememts is %d",odd);

    return 0;
}