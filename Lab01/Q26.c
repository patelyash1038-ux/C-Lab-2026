#include<stdio.h>

int main(){
    int n,i,evensum=0,oddsum=0;
    printf("Enter one number");
    scanf("%d", &n);
    for(i=1; i<=n ; i++){
        if(i%2==0){
            evensum += i;
        }
        else{
            oddsum += i;
        }
    }
    printf("evensum=%d",evensum);
    printf("oddsum=%d",oddsum);
    
    return 0;
}