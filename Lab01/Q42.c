#include<stdio.h>

int main(){
    int n,is_notprime=0;
    printf("Enter one no.: ");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("The no is neither prime nor composite");
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            is_notprime=1;
        }
    }
    if(is_notprime){
        printf("The no. is composite ");
    }
    else
        printf("The no. is prime");
       
    return 0;
}